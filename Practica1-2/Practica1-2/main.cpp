//
//  main.cpp
//  Practica1-2
//
//  Created by Alexander on 21.11.2024.
//

#include <iostream>
#include <sstream>
#include <vector>
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
    vector<string> words;
    string word;

    while (stream >> word) {
        words.push_back(word);
    }

    if (words.size() < 2 || words.size() > 30) {
        cerr << "ERROR 2 and 30" << endl;
        return 1;
    }

    string lastWord = words.back();

    for (const auto& w : words) {
        if (w != lastWord) {
            if (w.size() >= 2 && w.size() <= 10) {
                string modifiedWord = w.substr(1) + w[0];
                cout << modifiedWord << " ";
            }
        }
    }

    cout << endl;
    return 0;
}
