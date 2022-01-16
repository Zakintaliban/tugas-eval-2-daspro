#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int total(int, int);

int main () {
    int angka1, angka2, sum;
    cout << "masukan angka 1: " << endl;
    cin >> angka1;
    cout << "masukan angka 1: " << endl;
    cin >> angka2;
    sum = total(angka1, angka2);
    cout << sum << endl;
    getch();
    return 0;
}

int total(int a, int b) {
    return a+b;
}