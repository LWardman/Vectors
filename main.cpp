#include <iostream>
#include "vec3.h"


int main()
{
    vec3 firstVector{ 4, 2, 9 };

    firstVector.printCoords();

    vec3 secondVector{ 1, 2, 3 };

    secondVector.printCoords();

    std::cout << "Magnitude : " << secondVector.getMagnitude() << std::endl;

    secondVector.normalize();

    secondVector.printCoords();

    std::cout << "Magnitude : " << secondVector.getMagnitude() << std::endl;

    std::cout << "Angle between first and second vector : " << vec3::getAngleBetween(firstVector, secondVector) << std::endl;

    std::cout << "Perpendicular vector to first and second vector : " << std::endl;

    vec3 perpVec = vec3::getPerpendicularVector(firstVector, secondVector);

    std::cout << "Angle between first and perp vector : " << vec3::getAngleBetween(firstVector, perpVec) << std::endl;
    std::cout << "Angle between second and perp vector : " << vec3::getAngleBetween(secondVector, perpVec) << std::endl;

    vec3::getPerpendicularVector(firstVector, secondVector).printCoords();


    return 0;
}
