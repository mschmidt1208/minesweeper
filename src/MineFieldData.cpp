//
//  MinefieldData.cpp
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// HEADER INCLUDE
#include "MineFieldData.h"



//--------------------------------------
// Life Cycle
//--------------------------------------

MineFieldData::MineFieldData(unsigned int width, unsigned int heigth, unsigned int numberOfMines)  
: m_width(width), m_height(heigth), m_numberOfMines(numberOfMines)
{}


MineFieldData::~MineFieldData()
{}
