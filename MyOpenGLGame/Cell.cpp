//
//  Cell.cpp
//  MyOpenGLGame
//
//  Created by Evgeniy Ivanytsia on 12.08.2022.
//

#include "Cell.hpp"


Cell::Cell()
{
    this->x = 0;
    this->y = 0;
    this->type = UNDEFINED;
}

Cell::Cell(int x, int y, Types type)
{
    this->x = x;
    this->y = y;
    this->type = type;
}

void Cell::setX(int x)
{
    this->x = x;
}

void Cell::setY(int y)
{
    this->y = y;
}

void Cell::setType(Types type)
{
    this->type = type;
}

int Cell::getX()
{
    return this->x;
}

int Cell::getY()
{
    return this->y;
}

Types Cell::getType()
{
    return this->type;
}
