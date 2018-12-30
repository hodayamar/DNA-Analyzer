#include "New.h"

New::~New()
{
    std::cout << "im in dtor" << std::endl;
}

void New::run(int argc, char **argv)
{
    std::cout << "im going to shabas!!!" << std::endl;
}