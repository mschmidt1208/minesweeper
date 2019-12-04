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

void MineFieldPlotter::plotField()
{
    int fieldWidth = m_mineFieldData->getFieldWidth();
    int fieldHeigth = m_mineFieldData->getFieldHeight();
    std::vector<std::pair<int, int>> mineCoords = m_mineFieldData->getMineCoords();

    plotFirstRow(fieldWidth);

    for (unsigned int row = 0; row < fieldWidth; ++row)
    {
        for (unsigned int col = 0; col < fieldHeigth; ++col)
        {

        }
    }

    plotLastRow(fieldWidth);
}


void MineFieldPlotter::plotFirstRow(int width)
{
    std::cout << "┌";
    for (int i = 0; i < width; ++i)
        std::cout << "─";

    std::cout << "┐" << std::endl;
}


void MineFieldPlotter::plotLastRow(int width)
{
    std::cout << "└";
    for (int i = 0; i < width; ++i)
        std::cout << "─";

    std::cout << "┘" << std::endl;
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