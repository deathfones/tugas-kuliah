#include <iostream>
using namespace std;

void cetakUrutan (int i, int n) {
    if ( i > n) return;
    cout << i << "";
    cetakUrutan(i + 1, n);
}

int hitungGanjil (int n) {
    if (n <= 0) return 0;

    int isGanjil = (n % 2 != 0) ? 1 : 0;

    return isGanjil + hitungGanjil(n - 1);
}

int hitungGenap(int n) {
    if (n <= 0) return 0;

    int isGenap = (n % 2 == 0) ? 1 : 0;

    return isGenap + hitungGenap(n - 1);
}

int main () {
    int n;

    cout << "--- Program Ganjil Genap Rekursif ---" << endl;
    cout << "a. Masukkan jumlah urutan data : ";
    cin >> n;

    cout << "b. Data :";
    cetakUrutan(1, n);
    cout << endl;

    cout << "c. Jumlah bilangan ganjil : " << hitungGanjil(n) << endl;
    cout << "c. Jumlah bilangan genap : " << hitungGenap(n) << endl;

    return 0;
}