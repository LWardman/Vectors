//
// Created by Wardy on 30/05/2023.
//

#include "VectorDatabank.h"


VectorDatabank::VectorDatabank(vec3 inputVector)
{
    _vector = inputVector;

    inputVector.normalize();
    _normalisedVector = inputVector;
}

void VectorDatabank::printVector()
{
    _vector.printCoords();
}

void VectorDatabank::printNormalVector()
{
    _normalisedVector.printCoords();
}

void VectorDatabank::printMagnitude()
{
    _vector.printMagnitude();
}