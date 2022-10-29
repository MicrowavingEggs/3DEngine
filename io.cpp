#include "io.h"

/* Object */ void CreateObject(string path){

    /* Object teapot; */

    fstream file;
    file.open(path);

    if (file) {
        string line;

        while(getline(file, line)){
            vector<string> tokens{slice(line," ")};
            for (int i = 0; i < tokens.size(); i++){
                cout << tokens[i];
            }
            cout << endl;
        }
    }

    file.close();

    /*return teapot; */
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

int main(){
    fstream file;
    file.open("teapot.obj");

    if (file) {
        string line;

        while(getline(file, line)){
            vector<string> tokens{slice(line,"  ")};
            for (int i = 0; i < tokens.size(); i++){
                cout << tokens[i] << " ";
            }
            cout << endl;
        }
    }

    file.close();

    return 0;
}