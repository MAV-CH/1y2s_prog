//
//  main.cpp
//  Practica2-3
//
//  Created by Alexander on 21.11.2024.
//

#include <iostream>
#include <cctype>

using namespace std;


char find_first_upper(const string& str, int index) {
    // Базовый случай: если достигли конца строки, возвращаем нулевой символ
    if (index >= str.length()) {
        return '\0';
    }

    // Если текущий символ является заглавной буквой, возвращаем его
    if (isupper(str[index])) {
        return str[index];
    }

    // Рекурсивный вызов для следующего символа
    return find_first_upper(str, index + 1);
}

int main() {
    string input;
    cout << "Input line: ";
    getline(cin, input);

    char firstUppercase = find_first_upper(input, 0);

    if (firstUppercase != '\0') {
        cout << "Output: " << firstUppercase << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
