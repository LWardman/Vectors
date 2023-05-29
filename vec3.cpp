//
// Created by Wardy on 29/05/2023.
//

#include "vec3.h"
#include <cmath>
#include <iostream>


void vec3::printCoords() const
{
    std::cout << "=====" << "\nx = " << _x << "\ny = " << _y << "\nz = " << _z << "\n=====" << std::endl;
}

double vec3::getMagnitude() const
{
    return std::sqrt(_x * _x + _y * _y + _z * _z);
}

void vec3::normalize()
{
    double magnitude = getMagnitude();

    _x /= magnitude;
    _y /= magnitude;
    _z /= magnitude;
}

double vec3::getAngleBetween(const vec3& firstVec, const vec3& secondVec)
{
    double productX = firstVec._x * secondVec._x;
    double productY = firstVec._y * secondVec._y;
    double productZ = firstVec._z * secondVec._z;

    double dotProduct = productX + productY + productZ;

    double cosTheta = dotProduct / (firstVec.getMagnitude() * secondVec.getMagnitude());

    return acos(cosTheta) * 180 / M_PI;
}

vec3 vec3::getPerpendicularVector(const vec3& firstVec, const vec3& secondVec)
{
    vec3 perpVec{};

    perpVec._x = firstVec._y * secondVec._z - firstVec._z * secondVec._y;
    perpVec._y = firstVec._z * secondVec._x - firstVec._x * secondVec._z;
    perpVec._z = firstVec._x * secondVec._y - firstVec._y * secondVec._x;

    return perpVec;
}