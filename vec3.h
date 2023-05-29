//
// Created by Wardy on 29/05/2023.
//

#ifndef VECTORS_VEC3_H
#define VECTORS_VEC3_H


class vec3{

public:

    // On default initialization, sets the vector to be the zero vector.
    vec3() : _x(0), _y(0), _z(0) {}

    vec3(double x, double y, double z) : _x(x), _y(y), _z(z) {}

    vec3& operator= (const vec3& otherVec3)
    {
        if (this == &otherVec3)
        {
            return *this;
        }

        this->_x = otherVec3._x;
        this->_y = otherVec3._y;
        this->_z = otherVec3._z;

        return *this;
    }

    vec3& operator+= (const vec3& otherVec3)
    {
        if (this == &otherVec3)
        {
            return *this;
        }

        this->_x += otherVec3._x;
        this->_y += otherVec3._y;
        this->_z += otherVec3._z;

        return *this;
    }

    vec3& operator-= (const vec3& otherVec3)
    {
        if (this == &otherVec3)
        {
            return *this;
        }

        this->_x -= otherVec3._x;
        this->_y -= otherVec3._y;
        this->_z -= otherVec3._z;

        return *this;
    }

    void printCoords() const;

    [[nodiscard]] double getMagnitude() const;

    void normalize();

    static double getAngleBetween(const vec3& firstVec, const vec3& secondVec);

    static vec3 getPerpendicularVector(const vec3& firstVec, const vec3& secondVec);



private:
    double _x;
    double _y;
    double _z;

};


#endif //VECTORS_VEC3_H
