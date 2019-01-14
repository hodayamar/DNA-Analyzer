#include "../Controller/ControllerTools/Interpreter.h"

//TODO - add const where its need to be added.
//TODO - check if there is no match seq on map.
//TODO - make printOneSeq func available for all classes
//TODO - send all outputs to cli.
//TODO - add explicit o nocleotides.
//TODO - deal with this ugly one - name = argv[2]!!!! - slice function

int main()
{

    interpreter * controller = new interpreter();
    controller->run();
    return 0;

}