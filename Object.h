#ifndef Object_h
#define Object_h

#include <vector>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

class Object {
    private:
        vector<double[3]> vertexes;
        vector<double[3]> faces;
    
    public:
        Object();
        Object(vector<double[3]> vertexes,vector<int[3]> faces);
        ~Object();
        void move(double dx,double dy,double dz);
        void rotate(double dtheta);
        void moveat(double x,double y,double z);
        void rotateat(double theta);

        /* DEBUG FUNCTIONS */

        /* 
        void PrintVertexes();
        void PrintFaces();
        */
        
};



#endif /*Object_h*/