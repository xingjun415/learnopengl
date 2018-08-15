#include "array_buffer.h"

NAMESPACE_BEGIN

ArrayBuffer::ArrayBuffer(const float* vertices, int length)
    : _vertices(vertices), _length(length){
        glGenBuffers(1, &this->_vboId);
}

ArrayBuffer::~ArrayBuffer(){
    if( nullptr != _vertices ) {
        delete[] _vertices;
    }
}

unsigned int ArrayBuffer::id() const {
    return this->_vboId;
}

bool ArrayBuffer::upload() {
    glBindBuffer(GL_ARRAY_BUFFER, this->_vboId);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * this->_length, this->_vertices, GL_STATIC_DRAW);
}


NAMESPACE_END
