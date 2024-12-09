//
//  main.cpp
//  Practica1
//
//  Created by Alexander on 21.11.2024.
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Input line: ";
    getline(cin, input);

    if (!input.empty() && input.back() == '.') {
        input.pop_back();
    }

    istringstream stream(input);
    string word;

    cout << "Output: ";
    while (stream >> word) {
        if (word.length() == 3 && isalpha(word[0]) && isalpha(word[1]) && isalpha(word[2])) {
            cout << word << " ";
        }
    }
    cout << endl;

    return 0;
}

//cat eats franch dog and drink bear with best friend Tom.
