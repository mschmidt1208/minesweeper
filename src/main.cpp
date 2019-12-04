//
//  main.cpp
//
//  created by Marcel Schmidt, 2019-12-03
//
//

// LOCAL INCLUDES
#include "GameController.h"

// SYSTEM INCLUDES
#include <iostream>
#include <stdio.h>


int main(int argv, char** argc)
{
    try
    {
        GameController controller; 
        controller.initialize();
        controller.runGame();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    


    return 0;
}