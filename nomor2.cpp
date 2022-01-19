#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int cetak(char *);

int main() {
    char huruf[100];
    cout << "Masukkan nama: ";
    cin.get(huruf, 100);
    cetak(huruf);
    getch();
    return 0;
}

int cetak(char a[]) {
    cout << "Halo " << a << "!" << endl;
}