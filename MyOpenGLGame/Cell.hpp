//
//  Cell.hpp
//  MyOpenGLGame
//
//  Created by Evgeniy Ivanytsia on 12.08.2022.
//

#ifndef Cell_hpp
#define Cell_hpp


enum Types
{
    UNDEFINED,
    FIELD,
    FOREST,
    HILLS,
};


class Cell
{
private:
    int x;
    int y;
    Types type;
    
public:
    Cell();
    Cell(int x, int y, Types type);
    
    void setX(int x);
    void setY(int y);
    void setType(Types type);
    
    int getX();
    int getY();
    Types getType();
};

#endif /* Cell_hpp */
