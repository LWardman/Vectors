
#ifndef VECTORS_VEC3_H
#define VECTORS_VEC3_H


class vec3{

public:

    // On default initialization, sets the vector to be the zero vector.
    vec3() : _x(0), _y(0), _z(0) {}

    vec3(double x, double y, double z) : _x(x), _y(y), _z(z) {}

    // Operation overloads

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

    friend vec3 operator+ (const vec3& u, const vec3& v)
    {
        return vec3{u._x + v._x, u._y + v._y, u._z + v._z};
    }

    friend vec3 operator- (const vec3& u, const vec3& v)
    {
        return vec3{u._x - v._x, u._y - v._y, u._z - v._z};
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
     * * Is used to obtain a unit vector from any desired vector.
     *
     * * A unit vector is a vector whose magnitude is 1.
     *
     * * Normalization is done by dividing each entry in the vector by the magnitude of the vector.
     *   e.g (1, 1, 1) becomes (0.57735, 0.57735, 0.57735).
     */
    [[nodiscard]] vec3 normalize() const;

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
