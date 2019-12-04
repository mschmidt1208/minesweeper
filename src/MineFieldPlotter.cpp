//
//  MinefieldPlotter.cpp
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// HEADER INCLUDE
#include "MineFieldPlotter.h"

// SYSTEM INCLUDES
#include <iostream>
#include <string>


//--------------------------------------
// Life Cycle
//--------------------------------------

MineFieldPlotter::MineFieldPlotter()
{
}


//--------------------------------------
// Plotting
//--------------------------------------

// Better with ostream???

void MineFieldPlotter::plotField(AbstractMineFieldData* mineFieldData)
{
    unsigned int fieldWidth = mineFieldData->getFieldWidth();
    unsigned int fieldHeigth = mineFieldData->getFieldHeight();
    std::vector<std::pair<unsigned int, unsigned int>> mineCoords = mineFieldData->getMineCoords();

    plotFirstRow(fieldWidth);

    for (unsigned int row = 0; row < fieldHeigth; ++row)
    {
        std::cout << "│";

        for (unsigned int col = 0; col < fieldWidth; ++col)
        {
            std::cout << " •";
        }

        std::cout << " │" << std::endl;;
    }

    plotLastRow(fieldWidth);
}


void MineFieldPlotter::plotFirstRow(const unsigned int width)
{
    std::cout << "┌";
    for (unsigned int i = 0; i < width; ++i)
        std::cout << "──";

    std::cout << "─┐" << std::endl;
}


void MineFieldPlotter::plotLastRow(const unsigned int width)
{
    std::cout << "└";
    for (unsigned int i = 0; i < width; ++i)
        std::cout << "──";

    std::cout << "─┘" << std::endl;
}


/*
─
│
┌
┐
└
┘
├
┤
┬
┴
┼
*/