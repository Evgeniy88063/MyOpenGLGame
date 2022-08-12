//
//  GameField.hpp
//  MyOpenGLGame
//
//  Created by Evgeniy Ivanytsia on 12.08.2022.
//

#ifndef GameField_hpp
#define GameField_hpp

#include "Cell.hpp"


class GameField
{
private:
    int size;
    Cell **fieldCells;
    
public:
    GameField() = delete;
    GameField(int size);
    //GameField(int size, Cell **cells);
    
    int getSize();
    void showCells();
    bool draw();
};

#endif /* GameField_hpp */
