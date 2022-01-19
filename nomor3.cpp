#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int total(int, int);

int angka[10] = {1,2,3,4,5,6,7,8,9,10};

int main () {
    int e, f, g;
    cout << "masukan angka 1-10: " << endl;
    cin >> g;
    cout << "masukan nilainya" << endl;
    cin >> f;
    e = total(g, f);
    cout << e << endl;
    getch();
    return 0;
}

int total(int c, int b) {
    return angka[c] + b;
}