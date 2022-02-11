#include <iostream>
#include <cmath>
#include "jmesh.h"

int main(){
    JMesh::init();
    Triangulation tin;
    if (tin.load("odm_25dmesh.ply") != 0) JMesh::error("Can't open file.\n");
    
    tin.verticalEdgeTagging(0.5);
    tin.iterativeEdgeSwaps();

    // const double theta = M_PI / 2.0;
    // Matrix4x4 rotZ(std::cos(theta), -std::sin(theta), 0.0, 0.0,
    //               std::sin(theta), std::cos(theta),  0.0, 0.0,
    //               0.0, 0.0, 1.0, 0.0,
    //               0.0, 0.0, 0.0, 1.0);
    // tin.transform(rotZ);
    
    // tin.sharpEdgeTagging(M_PI / 2.5);
    // tin.iterativeEdgeSwaps();

    tin.saveOBJ("out.obj");

    return 0;
}