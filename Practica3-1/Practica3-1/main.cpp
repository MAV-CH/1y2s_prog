//
//  main.cpp
//  Practica3-1
//
//  Created by Alexander on 21.11.2024.
//

#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    char arr[] = "F!r-a3nc4h(1@dog_";
    char* ptr = arr;

    while (*ptr != '\0') {
        if (isalpha(*ptr)) {
            cout << *ptr;
        }
        ptr++;
    }
    cout << endl;
    return 0;
}
