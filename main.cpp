#include "Object.h"
#include "io.h"

using namespace std;

int main(int argc, char** argv){

    cout << "Beginning teapot parsing";

    Object teapot{CreateObject("teapot.obj")};

    cout << "teapot parsing finished";

    return 0;

}