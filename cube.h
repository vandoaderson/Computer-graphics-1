#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include "vec3.h"
class cube{
public:
     cube(){
        vertexList.push_back(vec3(1,-1,1));
        vertexList.push_back(vec3(1,-1,-1));
        vertexList.push_back(vec3(-1,-1,-1));
        vertexList.push_back(vec3(-1,-1,1));
        vertexList.push_back(vec3(1,1,1));
        vertexList.push_back(vec3(1,1,-1));
        vertexList.push_back(vec3(-1,1,-1));
        vertexList.push_back(vec3(-1,1,1));
    }
    void translate(float tx, float ty, float tz);
    void scale(float, float, float);
    void rotateX(float);
    void rotateY(float);
    void rotateZ(float);
private:
    std::vector <vec3> vertexList;
};

#endif // CUBE_H
