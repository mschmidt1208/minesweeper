#ifndef __ABSTRACTMINEFIELDDATA_H
#define __ABSTRACTMINEFIELDDATA_H

//
//  AbstractMinefieldData.h
//
//  created by Marcel Schmidt, 2019-12-04
//
//

// SYSTEM INCLUDES
#include <vector>
#include <utility>

class AbstractMineFieldData
{
public:
    // Life Cycle
    //----------------------
    // AbstractMineFieldData();
    virtual ~AbstractMineFieldData();

    virtual const unsigned int getFieldWidth() = 0;
    virtual const unsigned int getFieldHeight() = 0;
    
    virtual const std::vector<std::pair<unsigned int, unsigned int>>& getMineCoords() = 0;
};











#endif  // __ABSTRACTMINEFIELDDATA_H