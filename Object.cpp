#include "Object.h"
#include "math.h"

Object::Object(){

}

Object::Object(vector<double[3]> v, vector<int[3]> f){
    double v_coords[3]; /* coords of the vertex */
    double f_indexes[3]; /* indexes of vertexes of the face*/

    for (int i = 0; i < v.size(); i++){
        v_coords[0] = v[i][0];
        v_coords[0] = v[i][1];
        v_coords[0] = v[i][2];
        vertexes.push_back(v_coords);
    }

    for (int i = 0; i < f.size(); i++){
        f_indexes[0] = f[i][0];
        f_indexes[0] = f[i][1];
        f_indexes[0] = f[i][2];
        faces.push_back(f_indexes);
    }

}

Object::~Object(){
    delete &vertexes;
    delete &faces;
}

void Object::move(double dx,double dy,double dz){

}

void Object::rotate(double dtheta){

}

void Object::moveat(double x,double y,double z){

}

void Object::rotateat(double theta){

}

/* DEBUG FUNCTIONS */