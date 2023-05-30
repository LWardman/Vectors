//
// Created by Wardy on 30/05/2023.
//

#ifndef VECTORS_VECTORDATABANK_H
#define VECTORS_VECTORDATABANK_H

#include "vec3.h"

class VectorDatabank {

public:
    explicit VectorDatabank(vec3 inputVector);

    void printVector();

    void printNormalVector();

    void printMagnitude();

private:
    vec3 _vector;
    vec3 _normalisedVector;
};


#endif //VECTORS_VECTORDATABANK_H
