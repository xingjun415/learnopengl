#ifndef ARRAYB_UFFER_H_
#define ARRAYB_UFFER_H_

#include "common_define.h"

NAMESPACE_BEGIN

class ArrayBuffer {
public:
    ArrayBuffer(const float* vertices, int length);

    ~ArrayBuffer();

    unsigned int id() const;

    // Upload vertices to gpu memory
    bool upload();

private:
    const float* _vertices;
    int    _length;

    unsigned int _vboId;
};

NAMESPACE_END

#endif