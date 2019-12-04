#ifndef __MINEFIELDDATA_H
#define __MINEFIELDDATA_H

//
//  MinefieldData.h
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// LOCAL INCLUDES
#include "AbstractMineFieldData.h"

// SYSTEM INCLUDES
#include <vector>
#include <utility>

class MineFieldData : public AbstractMineFieldData
{
public:
    // Life Cycle
    //--------------
    MineFieldData();
    MineFieldData(unsigned int width, unsigned int heigth, unsigned int numberOfMines);
    ~MineFieldData();

    // Public Queries
    //--------------------------------------------
    const unsigned int getFieldWidth() { return m_width; }
    const unsigned int getFieldHeight() { return m_height; }

    const std::vector<std::pair<unsigned int, unsigned int>>& getMineCoords() { return m_mineCoords; }

    // Public Operations
    //--------------------------
    inline void setWidth(const unsigned int width) { m_width = width; }
    inline void setHeight(const unsigned int height) { m_height = height; }
    

private:    // Methods
    // create mine coordinates

private:    // Member variables
    unsigned int m_width;
    unsigned int m_height;
    
    unsigned int m_numberOfMines;

    std::vector<std::pair<unsigned int, unsigned int>> m_mineCoords;
};














#endif  // __MINEFIELDDATA_H