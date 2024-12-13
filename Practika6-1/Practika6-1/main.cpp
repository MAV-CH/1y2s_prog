//
//  main.cpp
//  Practika6-1
//
//  Created by Alexander on 22.11.2024.
//
#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

// Функция для преобразования чисел в строку
void NumtoStr(unordered_map<int, string> HashArr);

// Функция для преобразования строки в числа
void StrtoNum(unordered_map<int, string> HashArr);

// Функция для поиска ключа по значению в хеш-таблице
int findIndexByValue(const unordered_map<int, string>& hashMap, string& searchValue);

int main()
{
    int variant;
    unordered_map<int, string> HashArr;

    // Инициализация хеш-таблицы
    HashArr[1] = "a";
    HashArr[11] = "b";
    HashArr[111] = "c";
    HashArr[1111] = "d";
    HashArr[2] = "e";
    HashArr[22] = "f";
    HashArr[222] = "g";
    HashArr[2222] = "h";
    HashArr[3] = "i";
    HashArr[33] = "j";
    HashArr[333] = "k";
    HashArr[3333] = "l";
    HashArr[4] = "m";
    HashArr[44] = "n";
    HashArr[444] = "o";
    HashArr[4444] = "p";
    HashArr[5] = "q";
    HashArr[55] = "r";
    HashArr[555] = "s";
    HashArr[5555] = "t";
    HashArr[6] = "u";
    HashArr[66] = "v";
    HashArr[666] = "w";
    HashArr[6666] = "x";
    HashArr[7] = "y";
    HashArr[77] = "z";

    // Вывод меню для выбора варианта
    cout << "1. Из чисел в строку\n2. Из строки в число\nВыберите вариант: ";
    cin >> variant;

    // Очистка экрана (для Unix-подобных систем)
    system("clear");

    // Выбор варианта
    switch (variant) {
    case 1:
        NumtoStr(HashArr);
        break;
    case 2:
        StrtoNum(HashArr);
        break;
    default:
        cout << "Неверный выбор!" << endl;
        break;
    }

    return 0;
}

void NumtoStr(unordered_map<int, string> HashArr) {
    cin.ignore(); // Игнорирование символа новой строки после ввода варианта
    string str;
    getline(cin, str); // Чтение строки с числами
    string tr;
    int n;
    string temp;
    stringstream is(str); // Создание потока для разбора строки

    // Разбор строки на слова
    while (is >> tr) {
        for (int i = 0; i < tr.length(); i++) {
            if (tr[i] == '-') {
                n = stoi(temp); // Преобразование строки в число
                cout << HashArr[n]; // Вывод соответствующего символа
                temp = ""; // Очистка временной строки
            } else {
                temp += tr[i]; // Добавление символа к временной строке
            }
        }
        n = stoi(temp); // Преобразование последнего числа
        cout << HashArr[n]; // Вывод соответствующего символа
        temp = ""; // Очистка временной строки
        cout << " "; // Вывод пробела между словами
    }
    cout << endl;
}

void StrtoNum(unordered_map<int, string> HashArr) {
    cin.ignore(); // Игнорирование символа новой строки после ввода варианта
    string str, tr;
    getline(cin, str); // Чтение строки с символами

    stringstream is(str); // Создание потока для разбора строки

    // Разбор строки на слова
    while (is >> tr) {
        for (int i = 0; i < tr.length(); i++) {
            string temp(1, tr[i]); // Создание строки из одного символа
            cout << findIndexByValue(HashArr, temp); // Вывод соответствующего числа
            if (i != tr.length() - 1) {
                cout << "-"; // Вывод разделителя между числами
            }
        }
        cout << "\t"; // Вывод табуляции между словами
    }
    cout << endl;
}

int findIndexByValue(const unordered_map<int, string>& hashMap, string& searchValue) {
    // Поиск ключа по значению в хеш-таблице
    for (const auto& pair : hashMap) {
        if (pair.second == searchValue) {
            return pair.first; // Возврат ключа, если значение найдено
        }
    }
    return 0; // Возврат 0, если значение не найдено
}
