#include <iostream>
using namespace std;

int tambahRekursif(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return tambahRekursif(a + 1, b - 1);
    }
}

int main () {
    int a, b;

    cout << "---- Program penjumlahan A+B Rekursif ---" << endl;

    cout << "Masukkan Angka A : "; cin >> a;
    cout << "Masukkan Angka B : "; cin >> b;

    cout << "Proses :";
    for(int i=0; i<b; i++) cout << "1 + ";
    cout << a << endl;

    int hasil = tambahRekursif(a, b);
    cout << "Jumlah bilangan (" << a << ", " << b << ") : " << hasil << endl;

    cout << "-----------------" << endl;

    cout << "Test Case Soal:" << endl;
    cout << "Jumlah(3, 4) -> Hasil: " << tambahRekursif(3, 4) << endl;
    cout << "Jumlah(4, 6) -> Hasil: " << tambahRekursif(4, 6) << endl;

    return 0;
}