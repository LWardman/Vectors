#include <iostream>
#include "Vector_lib/vec3.h"

using vector = vec3;

int main()
{
    vector u = vector{ 1, 0, 0 } + vector{ 0, 2, 0 };

    vector v = vector{ 0, 7, 0} - vector{4, 0, 0};

    vector perp = vector::getPerpendicularVector(u, v); // perp = {0, 0, 15}

    perp = perp.normalize(); // perp = {0, 0, -1}

    std::cout << "Angle between u and perp = " << vector::getAngleBetween(u, perp) << std::endl;
    std::cout << "Angle between v and perp = " << vector::getAngleBetween(v, perp) << std::endl;

    perp.printCoords();

    return 0;
}
