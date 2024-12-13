//
//  main.cpp
//  Practika5
//
//  Created by Alexander on 22.11.2024.
//

#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Использование: " << argv[0] << " <входной_файл> <выходной_файл>" << endl;
        return 1;
    }

    ifstream inputFile(argv[1]);
    if (!inputFile) {
        cerr << "Ошибка открытия файла: " << argv[1] << endl;
        return 1;
    }

    ofstream outputFile(argv[2], ios::binary);
    if (!outputFile) {
        cerr << "Ошибка создания файла: " << argv[2] << endl;
        return 1;
    }

    set<string> uniqueLines;
    string line;

    // Чтение строк из входного файла и добавление их в set
    while (getline(inputFile, line)) {
        uniqueLines.insert(line);
    }

    inputFile.close();

    // Запись уникальных строк в выходной файл
    for (const auto& uniqueLine : uniqueLines) {
        outputFile.write(uniqueLine.c_str(), uniqueLine.size());
        outputFile.write("\n", 1);
    }

    outputFile.close();

    cout << "Уникальные строки успешно записаны в файл: " << argv[2] << endl;

    return 0;
}
