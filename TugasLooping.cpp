#include <iostream>
using namespace std;

int angka;
int pilihan;

void tampilkanMenu() {
    cout << "\n========== MENU UTAMA ==========" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
}

void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

bool cekPrima(int n) {
    if (n <= 1) return false;

return true;
}


int main() {
    return 0;
}