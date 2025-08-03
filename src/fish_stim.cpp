#include <iostream>
#include "../include/NHStimDLLLoader.h"
#include "../include/NHStimulatorFunctions.h"

int main() {
    int error_returned = LoadStimDLL();

    if (error_returned == 0)
    {
        std::cout << "DLL loaded successfully" << std::endl;
    }
    else
    {
        std::cout << "\"LoadStimDLL\" returned error code " + std::to_string(error_returned) << std::endl;
    }
    return 0;
}