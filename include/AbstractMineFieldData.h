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
    AbstractMineFieldData();

    virtual int getFieldWidth() = 0;
    virtual int getFieldHeight() = 0;
    
    virtual std::vector<std::pair<int,int>>& getMineCoords() = 0;
};











#endif  // __ABSTRACTMINEFIELDDATA_H