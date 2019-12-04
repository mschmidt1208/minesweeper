//
//  GameController.cpp
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// HEADER INCLUDE
#include "GameController.h"

// SYSTEM INCLUDES
#include <iostream>
#include <exception>


//--------------------------------------
// Life Cycle
//--------------------------------------

GameController::GameController()
{
    m_mineFieldData = new MineFieldData(10, 10, 3);
    m_mineFieldPlotter = new MineFieldPlotter();
}


GameController::~GameController()
{
    delete m_mineFieldData;
    delete m_mineFieldPlotter;
}


//--------------------------------------
// Game
//--------------------------------------

void GameController::initialize()
{
    if (!m_mineFieldPlotter || !m_mineFieldData)
    {
        std::exception e;
        throw e;
    }

    std::cout << "Starting MineSweeper................" << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;

    unsigned int width = 0;
    unsigned int height = 0;
    unsigned int numberOfMines = 0;

    std::cout << "How many columns? ";
    std::cin >> width;

    std::cout << "How many rows? ";
    std::cin >> height;

    std::cout << "How many mines? ";
    std::cin >> numberOfMines;

    m_mineFieldData->setWidth(width);
    m_mineFieldData->setHeight(height);


}


void GameController::runGame()
{

    m_mineFieldPlotter->plotField(m_mineFieldData);



}

