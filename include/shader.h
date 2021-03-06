#ifndef SHADER_H_
#define SHADER_H_

#include "common_define.h"
#include "glm/glm.hpp"

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

NAMESPACE_BEGIN

class Shader 
{
public:
    unsigned int id;

    Shader(const GLchar* vertexPath, const GLchar* fragPath);

    void use();

    void setBool(const std::string& name, bool value) const;

    void setInt(const std::string& name, int value) const;

    void setFloat(const std::string& name, float value) const;

    void setMat4(const std::string& name, glm::mat4& mat4) const;

    void setVec3(const std::string& name, float v1, float v2, float v3) const;
    void setVec3(const std::string& name, glm::vec3& vec) const;

};

NAMESPACE_END

#endif