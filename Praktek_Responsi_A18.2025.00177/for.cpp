#include <iostream>
using namespace std;

int main (){

    cout << "==== Perulangan For ====" << endl;

    for (int baris = 5; baris >= 1; baris--) {
        for (int angka = 10; angka >= 10 - (baris - 1); angka--) {
            cout << angka << " ";
        }
        cout << endl; // <<=== BIKIN BARIS BARU DI SINI
    }

    return 0;
}
