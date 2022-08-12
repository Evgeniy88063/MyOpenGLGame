//
//  main.cpp
//  MyOpenGLGame
//
//  Created by Evgeniy Ivanytsia on 11.08.2022.
//

#include <iostream>
#include <GLFW/glfw3.h>
#include "GameField.hpp"


int main(void)
{
    GameField gf(8);
    gf.showCells();

    return 0;
}
