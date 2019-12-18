//
//  MinefieldData.cpp
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// HEADER INCLUDE
#include "MineFieldData.h"

// SYSTEM INCLUDES
#include <iostream>



//--------------------------------------
// Life Cycle
//--------------------------------------

MineFieldData::MineFieldData(unsigned int colCount, unsigned int rowCount, unsigned int numberOfMines)  
: m_cols(colCount), m_rows(rowCount), m_numberOfMines(numberOfMines)
{

    Board testBoard(20, 20);


    std::cout << testBoard(10, 10) << std::endl;
    std::cout << testBoard(25, 10) << std::endl;
    std::cout << testBoard(5, 5) << std::endl;





}


MineFieldData::~MineFieldData()
{}
