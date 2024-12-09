//
//  main.cpp
//  Practica2-1
//
//  Created by Alexander on 21.11.2024.
//

#include <iostream>
using namespace std;

double F(int n) {
    if (n < 3) {
        return 1;
    } else if (n % 2 != 0) {  // n нечётное
        return F(n - 1) + 3 * F(n - 2);
    } else {  // n чётное
        double sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += F(i);
        }
        return sum;
    }
}

int main() {
    int n;
    cout << "Input n: ";
    cin >> n;

    if (n < 0) {
        cerr << "ERROR n < 0" << endl;
        return 1;
    }

    double result = F(n);
    cout << "F(" << n << ") = " << result << endl;

    return 0;
}
