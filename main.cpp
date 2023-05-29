#include <iostream>
#include "vec3.h"

int main()
{
    auto* zeroVector = new vec3{0, 0, 0};

    zeroVector->printCoords();

    auto* newVector = new vec3{1, 2, 3};

    newVector->printCoords();

    newVector = newVector;

    newVector->printCoords();


    return 0;
}
