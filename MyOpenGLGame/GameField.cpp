//
//  GameField.cpp
//  MyOpenGLGame
//
//  Created by Evgeniy Ivanytsia on 12.08.2022.
//

#include "GameField.hpp"
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <iostream>


GameField::GameField(int size)
{
    this->size = size;
    
    this->fieldCells = new Cell* [size];
    for (int i = 0; i < size; i++)
    {
        this->fieldCells[i] = new Cell [size];
    }
    
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            this->fieldCells[row][col].setX(row);
            this->fieldCells[row][col].setY(col);
            this->fieldCells[row][col].setType(static_cast<Types>(rand() % 3 + 1));
        }
    }
}

int GameField::getSize()
{
    return size;
}

void GameField::showCells()
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            std::cout << "x=" << this->fieldCells[row][col].getX() << " "
            << "y=" << this->fieldCells[row][col].getY() << " "
            << "t=" << this->fieldCells[row][col].getType() << "    ";
        }
        std::cout << std::endl;
    }
}

