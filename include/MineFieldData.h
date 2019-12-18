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
#include <string>

class Board
{
public:
    explicit Board(int colCount, int rowCount) : m_colCount(colCount), m_rowCount(rowCount)
    {
        m_board = new char*[rowCount];
        for (int i = 0; i < rowCount; i++) 
        {
            m_board[i] = new char[colCount];
            
            for (int j = 0; j < colCount; j++)
            {
                m_board[i][j] = '•';            
            }
        }
    }

    ~Board()
    {
        for (int i = 0; i < m_rowCount; i++)
            delete[]  m_board[i];

        delete[] m_board;
    }

    char operator()(int row, int col) 
    {
        if ( row > m_rowCount || col > m_colCount )
            return ' ';

        return m_board[row-1][col-1]; 
    }


private:
    int m_colCount;
    int m_rowCount;
    char** m_board;
};




class MineFieldData
{
public:
    // Life Cycle
    //--------------
    MineFieldData(unsigned int colCount, unsigned int rowCount, unsigned int numberOfMines);
    ~MineFieldData();

    // Public Queries
    //--------------------------------------------
    const unsigned int numberOfCols() { return m_cols; }
    const unsigned int numberOfRows() { return m_rows; }

    const std::vector<std::pair<unsigned int, unsigned int>>& getMineCoords() { return m_mineCoords; }

    // Public Operations
    //--------------------------

private:    // Methods
    // create mine coordinates

private:    // Member variables
    unsigned int m_cols;
    unsigned int m_rows;
    
    unsigned int m_numberOfMines;

    std::vector<std::pair<unsigned int, unsigned int>> m_mineCoords;
};














#endif  // __MINEFIELDDATA_H