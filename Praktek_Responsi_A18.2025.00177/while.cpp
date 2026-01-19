#include <iostream>
using namespace std;

int main() {
    int baris = 5;
    while (baris >= 1) {
        int angka = 10;
        while (angka >= 10 - (baris - 1)) {
            cout << angka << " ";
            angka--;
        }
        cout << endl;
        baris--;
    }
}
