//
//  main.cpp
//  Practica3-2
//
//  Created by Alexander on 21.11.2024.
//

#include <iostream>
#include <algorithm>

using namespace std;

void print_sorted_arr(double* arr, int size) {
    sort(arr, arr + size);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    double array[] = {3.5, 1.2, 4.8, 2.1, 5.0};
    int size = sizeof(array) / sizeof(array[0]);
    
    print_sorted_arr(array, size);

    return 0;
}
