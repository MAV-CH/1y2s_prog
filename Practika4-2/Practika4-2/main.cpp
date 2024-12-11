//
//  main.cpp
//  Practika4-2
//
//  Created by Alexander on 22.11.2024.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "using: " << argv[0] << " <name_file>" << endl;
        return 1;
    }

    ifstream inputFile(argv[1]);
    if (!inputFile) {
        cerr << "ERROR OPEN FILE: " << argv[1] << endl;
        return 1;
    }

    string line;
    int count = 0;

    while (getline(inputFile, line)) {
        if (!line.empty() && line[0] == 'S') {
            count++;
        }
    }

    inputFile.close();

    cout << "Count line 'S': " << count << endl;

    return 0;
}
