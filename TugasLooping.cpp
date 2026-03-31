#include <iostream>
using namespace std;

int angka;
int pilihan;

void tampilkanMenu()
{
    cout << "\n========== MENU UTAMA ==========" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
}

void inputAngka()
{
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

bool cekPrima(int n)
{
    if (n <= 1)
        return false;
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}

bool cekFibonacci(int n)
{
    if (n < 0)
        return false;
    int a = 0;
    int b = 1;
    while (a < n)
    {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == n);
}

void tampilkanHasil(bool hasil, string jenis)
{
    if (hasil)
    {
        cout << "Hasil: " << angka << " adalah bilangan " << jenis << "." << endl;
    }
    else
    {
        cout << "Hasil: " << angka << " BUKAN bilangan " << jenis << "." << endl;
    }
}

int main() {
    // Loop utama program
    while (true) {
        tampilkanMenu();

    switch (pilihan) {
            case 1:
                inputAngka();
                tampilkanHasil(cekPrima(angka), "Prima");
                break;
            case 2:
                inputAngka();
                tampilkanHasil(cekFibonacci(angka), "Fibonacci");
                break;
            case 0:
                cout << "Keluar dari program. Terima kasih!" << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
