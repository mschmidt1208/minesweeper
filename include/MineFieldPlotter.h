#ifndef __MINEFIELDPLOTTER_H
#define __MINEFIELDPLOTTER_H

//
//  MinefieldPlotter.h
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// LOCAL INCLUDES


// SYSTEM INCLUDES
#include <stdio.h>



class MineFieldPlotter
{
public:
    // Life Cycle
    //-----------------
    MineFieldPlotter();
    // ~MineFieldPlotter();

    // void plotBoard(AbstractMineFieldData* mineFieldData);

private:    // Methods
    // Plotting
    //---------------    
    void plotFirstRow(const unsigned int width);
    void plotLastRow(const unsigned int width);

};













#endif  // __MINEFIELDPLOTTER_H