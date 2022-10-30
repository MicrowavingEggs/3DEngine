#include "Object.h"
#include "math.h"

Object::Object(){

}

Object::Object(vector<triangle> f){

    for (int i = 0; i < f.size(); i++){
        faces.push_back(f[i]);
    }

}

Object::~Object(){
    
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