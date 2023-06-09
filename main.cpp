#include <iostream>
#include "vec3.h"
#include "VectorDatabank.h"


int main()
{
    // Initialising two test vectors, these will be used to test other features in the vec3 class.
    vec3 firstVector{ 4, 2, 9 };
    firstVector.printCoords();

    vec3 secondVector{ 1, 2, 3 };
    secondVector.printCoords();

    // Testing the class' ability to get the magnitude and divide each entry by the magnitude.
    // It's expected that the magnitude after normalising is 1.
    secondVector.printMagnitude();

    secondVector.normalize();

    secondVector.printCoords();

    secondVector.printMagnitude();

    // Testing the class' ability to generate a perpendicular vector.
    std::cout << "Angle between first and second vector : " << vec3::getAngleBetween(firstVector, secondVector) << std::endl;

    std::cout << "Perpendicular vector to first and second vector : " << std::endl;

    vec3 perpVec = vec3::getPerpendicularVector(firstVector, secondVector);

    std::cout << "Angle between first and perp vector : " << vec3::getAngleBetween(firstVector, perpVec) << std::endl;
    std::cout << "Angle between second and perp vector : " << vec3::getAngleBetween(secondVector, perpVec) << std::endl;

    vec3::getPerpendicularVector(firstVector, secondVector).printCoords();

    // Testing the VectorDatabank.
    VectorDatabank vector{ vec3{ 9, 4, 3 } };

    vector.printVector();
    vector.printNormalVector();
    vector.printMagnitude();

    return 0;
}
