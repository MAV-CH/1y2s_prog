//
//  main.cpp
//  Practika6-3
//
//  Created by Alexander on 25.11.2024.
//

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void findDuplicates(const vector<int>& arr) {
    unordered_map<int, int> hashTable;

    // Заполняем хеш-таблицу
    for (int num : arr) {
        hashTable[num]++;
    }

    // Выводим дубликаты
    for (const auto& pair : hashTable) {
        if (pair.second > 1) {
            cout << pair.first << " повторяется " << pair.second << " раз(а)" << endl;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3, 6, 7, 8, 9, 10, 10, 10};

    cout << "Повторяющиеся элементы в массиве:" << endl;
    findDuplicates(arr);

    return 0;
}
