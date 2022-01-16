#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int menu();

main() {
    menu();
    getch();
    return 0;
}
int menu() {
    cout << "pilihan menu" << endl; 
    cout << "1. Mie Goreng" << endl;
    cout << "2. Ayam Bakar" << endl;
    cout << "3. Nasi Uduk" << endl;
}
