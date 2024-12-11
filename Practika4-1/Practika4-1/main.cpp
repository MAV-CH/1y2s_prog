//
//  main.cpp
//  Practika4-1
//
//  Created by Alexander on 22.11.2024.
//

#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

bool checkBrackets(const string& filename){
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "ERROR OPEN FILE: " << filename << endl;
        return false;
    }

    stack<char> stack;
    char ch;

    while (file.get(ch)){
        if (ch == '('){
            stack.push(ch);
        } else if (ch == ')'){
            if (stack.empty()){
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}

int main(int argc, char* argv[]){
    if (argc != 2){
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    string filename = argv[1];
    if (checkBrackets(filename)){
        cout << "Complete" << endl;
    } else{
        cout << "Not complete" << endl;
    }
    return 0;
}
