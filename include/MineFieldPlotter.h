#ifndef __MINEFIELDPLOTTER_H
#define __MINEFIELDPLOTTER_H

//
//  MinefieldPlotter.h
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// LOCAL INCLUDES
#include "AbstractMineFieldData.h"

// SYSTEM INCLUDES
#include <stdio.h>



class MineFieldPlotter
{
public:
    // Life Cycle
    //-----------------
    MineFieldPlotter();
    // ~MineFieldPlotter();

    void plotField();

private:    // Methods
    // Plotting
    //---------------    
    void plotFirstRow(int width);
    void plotLastRow(int width);


private:    // Member variables
    AbstractMineFieldData* m_mineFieldData;


};













#endif  // __MINEFIELDPLOTTER_H