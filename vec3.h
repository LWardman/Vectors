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

    // Handles overwriting of this vector with another vector.
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

    // Handles addition of another vector to this vector.
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

    // Handles subtraction of another vector to this vector.
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

    /**
     * Prints out the coordinates of this vector in order : x, y, z
     * Useful for debugging and sanity checks on what the current vector is.
     */
    void printCoords() const;

    /**
     * * The magnitude of the vector is the 'length' of the vector.
     *
     * * For example, The magnitude of (1, 1, 1) is the distance of this point away from the origin.
     *
     * * The magnitude is calculated as the square root of the sum of squares of each vector entry.
     *   e.g (1, 2, 3) has magnitude of sqrt(1*1 + 2*2 + 3*3).
     */
    [[nodiscard]] double getMagnitude() const;

    /**
     * * Prints out the magnitude calculated in getMagnitude().
     *
     * * Useful for debugging and testing whether normalize() has done it's job/
     *
     * * Also used in the normalize() function.
     */
    void printMagnitude() const;

    /**
     * * normalizes the current vector. Replaces the member variables of the current class.
     *
     * * If the current vector wants to be kept,
     *   initialise a new vec3 based on the current vector and normalize that instead.
     *
     * * Normalization is done by dividing each entry in the vector by the magnitude of the vector.
     *   e.g (1, 1, 1) becomes (0.57735, 0.57735, 0.57735).
     */
    void normalize();

    /**
     * * Calculates the angle between two vectors via the dot product.
     *   Specifically uses the formula, cos(theta) = a.b / |a|*|b|. Where a.b is the dot product.
     *
     * * Converts the angle to degrees.
     *
     * @param firstVec the first vector to calculate with.
     * @param secondVec the second vector to compare the first vector with.
     * @returns The angle in degrees between the two vectors.
     */
    static double getAngleBetween(const vec3& firstVec, const vec3& secondVec);

    /**
     * * Creates a new vector which is perpendicular to the two input vectors.
     *   In 3d this is always possible unless the two input vectors are the same.
     *
     * * The perpendicular vector is calculated by the cross product.
     *
     * * The output vector can be tested by using getAngleBetween() for all three pairs of vectors.
     *
     * * The two input vectors do not need to be perpendicular to each other.
     *
     * @param firstVec The first vector to use in the cross product.
     * @param secondVec The second vector to use in the cross product.
     * @returns A perpendicular vector.
     */
    static vec3 getPerpendicularVector(const vec3& firstVec, const vec3& secondVec);



private:
    double _x;
    double _y;
    double _z;

};


#endif //VECTORS_VEC3_H
