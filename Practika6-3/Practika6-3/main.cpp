//
//  main.cpp
//  Practika6-4
//
//  Created by Alexander on 25.11.2024.
//

#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

bool areAllCharactersUnique(const string& str) {
    unordered_set<char> charSet;

    for (char ch : str) {
        if (charSet.find(ch) != charSet.end()) {
            return false; // Символ уже встречался
        }
        charSet.insert(ch);
    }

    return true; // Все символы уникальны
}

int main() {
    string input;
    cout << "Введите строку: ";
    getline(cin, input);

    if (areAllCharactersUnique(input)) {
        cout << "Все символы в строке уникальны" << endl;
    } else {
        cout << "В строке есть повторяющиеся символы" << endl;
    }

    return 0;
}
