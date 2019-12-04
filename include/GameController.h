#ifndef __GAMECONTROLLER_H
#define __GAMECONTROLLER_H

//
//  GameController.h
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// LOCAL INCLUDES
#include "MineFieldData.h"
#include "MineFieldPlotter.h"



class GameController
{
public:
// Life Cycle
//-------------------
    GameController();
    ~GameController();

// Game
//--------------------
    void initialize();
    void runGame();

private:
    MineFieldData* m_mineFieldData;
    MineFieldPlotter* m_mineFieldPlotter;

};








#endif  // __GAMECONTROLLER_H
