#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int cetak(string, int);

int main() {
    string nama;
    int umur;
    cout << "masukan nama anda" << endl;
    cin >> nama;
    cout << "masukan umur anda" << endl;
    cin >> umur;
    cetak(nama, umur);
    getch();
}

int cetak(string a, int b) {
    cout << "halo, nama anda " << a << endl;
    cout << "umur anda " << b << endl;
}