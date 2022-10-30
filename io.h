#ifndef io_h
#define io_h

#include "Object.h"

#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <fstream>


using namespace std;

Object CreateObject(string path);
vector<string> slice(string input, string delimiter);


#endif /* io_h */
