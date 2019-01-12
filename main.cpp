#include "Interpreter.h"

//TODO
//check if there is no match seq on map.
//adding exception - if file does not exist.
//make printOneSeq func available for all classes
//send all outputs to cli.
//FIXME - add checking for the pair sequence.
//add explicit o nocleotides.
//set autoInc to 0 if the list is empty .

int main()
{

    interpreter * controller = new interpreter();
    controller->run();
    return 0;

}