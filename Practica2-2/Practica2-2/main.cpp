//
//  main.cpp
//  Practica2-2
//
//  Created by Alexander on 21.11.2024.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string remove_vowels(const string& input) {
    string result;
    for (char ch : input) {
        ch = tolower(ch); // Приводим символ к нижнему регистру для упрощения проверки
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y') {
            result += ch;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Input line: ";
    getline(cin, input);
    
    string output = remove_vowels(input);
    
    cout << "Without vowels: " << output << endl;
    return 0;
}
