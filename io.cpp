#include "io.h"

Object CreateObject(string path){

    vector<double[3]> v;
    vector<int[3]> f;

    fstream file;
    file.open("teapot.obj");

    if (file) {
        string line;
        while(getline(file, line)){
            vector<string> tokens{slice(line,"  ")};

            if (tokens[0][0] == 'v'){
                double temp_vertexes[3];
                temp_vertexes[0] = stod(tokens[1]);
                temp_vertexes[1] = stod(tokens[2]);
                temp_vertexes[2] = stod(tokens[3]);
                v.push_back(temp_vertexes);
            }

            if (tokens[0][0] == 'f'){
                int temp_face[3];
                temp_face[0] = stoi(tokens[1]);
                temp_face[1] = stoi(tokens[2]);
                temp_face[2] = stoi(tokens[3]);
                f.push_back(temp_face);
            }
        }
    }

    file.close();

    for (int i = 0; i < v.size(); i++){
        cout << v[i];
    }

    for (int i = 0; i < f.size(); i++){
        cout << f[i];
    }

    Object teapot(v,f);
    return teapot;
}


vector<string> slice(string input, string delimiter){ /* Tokenize input by removing delimiters */
    vector<string> tokens;
    string::size_type n = delimiter.length();

    int token_index = 0; /* Points at the beginning of the word*/

    for (string::size_type i = input.find(delimiter); i != string::npos; i = input.find(delimiter)) {
        if ((input[token_index] != 'f') || ((input[token_index] != 'v'))){
            tokens.push_back(input.substr(token_index,(i-token_index)));
        }
        input.erase(i, n);
        token_index = i;
    }
    tokens.push_back(input.substr(token_index,(input.size() - token_index)));

    return tokens;
}