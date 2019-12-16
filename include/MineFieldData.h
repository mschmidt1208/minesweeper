#ifndef __MINEFIELDDATA_H
#define __MINEFIELDDATA_H

//
//  MinefieldData.h
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// LOCAL INCLUDES

// SYSTEM INCLUDES
#include <vector>
#include <utility>





class MineFieldData
{
public:
    // Life Cycle
    //--------------
    MineFieldData(unsigned int width, unsigned int heigth, unsigned int numberOfMines);
    ~MineFieldData();

    // Public Queries
    //--------------------------------------------
    const unsigned int getFieldWidth() { return m_width; }
    const unsigned int getFieldHeight() { return m_height; }

    const std::vector<std::pair<unsigned int, unsigned int>>& getMineCoords() { return m_mineCoords; }

    // Public Operations
    //--------------------------

private:    // Methods
    // create mine coordinates

private:    // Member variables
    unsigned int m_width;
    unsigned int m_height;
    
    unsigned int m_numberOfMines;

    std::vector<std::pair<unsigned int, unsigned int>> m_mineCoords;
};














#endif  // __MINEFIELDDATA_H