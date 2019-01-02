#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SHAREDPTR_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SHAREDPTR_H

#include <stddef.h>
#include <stdlib.h>
#include <iostream>//cout

template<typename T>
class sharedPtr
{
public:

    explicit sharedPtr(T* ptr = NULL);
    ~sharedPtr();

    sharedPtr(const sharedPtr &);
    sharedPtr& operator=(const sharedPtr &);
    sharedPtr& operator=(T*);//Todo

    T* operator->()const;
    T& operator*()const;
    operator bool()const;

    bool operator==(const sharedPtr& ptr)const;
    bool operator!=(const sharedPtr& ptr)const;


    bool isvalid()const;
    T* get()const;
    size_t * get_ref_counter();

    template<typename U>
    sharedPtr(const sharedPtr<U>& ptr);

    template<typename U>
    friend class sharedPtr;


private:

    size_t *refCount;
    T*   m_ptr;
    void delete_last_ptr();
    void swap(sharedPtr& other);
};


template<typename T>
sharedPtr<T>::sharedPtr(T* ptr)try
        :refCount (new size_t (1)),
         m_ptr(ptr)
{}
catch(std::bad_alloc& e)
{
    delete ptr;
    throw; // throw the same exception that we get.
}


template<typename T>
void sharedPtr<T>::delete_last_ptr()
{
    if((*refCount) <= 0)
    {
        std::cout << "Last ptr" << std::endl;
        delete refCount;
        delete m_ptr;
    }
}


template<typename T>
sharedPtr<T>::~sharedPtr()
{

    if(isvalid())
    {
        --(*refCount);

        sharedPtr<T>::delete_last_ptr();

        refCount = NULL;
        m_ptr = NULL;
    }
}


template<typename T>
sharedPtr<T>::sharedPtr(const sharedPtr& ptr)
        :refCount(ptr.refCount),
         m_ptr(ptr.m_ptr)
{
//    std::cout << "template<typename T>cpytor" << std::endl;

    if(isvalid())
        (*refCount)++;
}

template<typename T>
template<typename U>
sharedPtr<T>::sharedPtr(const sharedPtr<U>& ptr)
        :refCount(ptr.refCount),
         m_ptr(ptr.m_ptr)
{
//    std::cout << "template<typename U>cpytor" << std::endl;
    if(isvalid())
        (*refCount)++;
}



template<typename T>
void sharedPtr<T>::swap(sharedPtr& other)
{
    std::swap(m_ptr,other.m_ptr);
    std::swap(refCount,other.refCount);
}

template<typename T>
sharedPtr<T>& sharedPtr<T>::operator=(const sharedPtr& ptr)
{
    //for ctor
    sharedPtr<T> temp(ptr);
    swap(temp);
    return *this;
}


template<typename T>
inline T & sharedPtr<T>::operator* ()const
{
    return *m_ptr;
}


template<typename T>
inline T * sharedPtr<T>::operator-> ()const
{
    return m_ptr;
}


template<typename T>
inline T* sharedPtr<T>::get() const
{
    return m_ptr;
}


template<typename T>
inline sharedPtr<T>::operator bool()const
{
    return m_ptr;
}


template<typename T>
inline bool sharedPtr<T>::isvalid()const
{
    return (m_ptr != NULL && refCount != NULL);
}


template<typename T>
inline bool sharedPtr<T>::operator==(const sharedPtr& ptr)const
{
    return (m_ptr == ptr.m_ptr && refCount == ptr.refCount);
}


template<typename T>
inline bool sharedPtr<T>::operator!=(const sharedPtr& ptr)const
{
    return (m_ptr != ptr.m_ptr);
}

template<typename T>
inline size_t * sharedPtr<T>::get_ref_counter()
{
    return refCount;
}

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SHAREDPTR_H
