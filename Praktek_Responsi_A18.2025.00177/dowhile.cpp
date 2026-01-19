#include <iostream>
using namespace std;

int main() {
    int baris = 5;
    do {
        int angka = 10;
        do {
            cout << angka << " ";
            angka--;
        } while (angka >= 10 - (baris - 1));

        cout << endl;
        baris--;
    } while (baris >= 1);
}
