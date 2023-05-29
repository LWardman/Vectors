//
// Created by Wardy on 29/05/2023.
//

#include "vec3.h"
#include <iostream>


void vec3::printCoords() const
{
    std::cout << "x = " << _x << std::endl;
    std::cout << "y = " << _y << std::endl;
    std::cout << "z = " << _z << std::endl;
}