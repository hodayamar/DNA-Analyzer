#include "showList.h"

showList::~showList()
{
    std::cout << "im in showList dtor" << std::endl;
}

void showList::run(int argc, char ** argv, memoryCtrl & m_memoryCtrl)
{
    m_memoryCtrl.showlist();
}

Icommand *  showList::Create()
{
    return new showList();
}