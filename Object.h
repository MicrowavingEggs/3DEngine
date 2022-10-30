#ifndef Object_h
#define Object_h

#include <vector>
#include <string>
#include <array>
#include <vector>
#include <cstring>

using namespace std;

struct vertex{
    double x,y,z;
};

struct triangle{
    vertex p[3];
};

class Object {
    private:
        vector<triangle> faces;
    
    public:
        Object();
        Object(vector<triangle> f);
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