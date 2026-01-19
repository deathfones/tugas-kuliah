#include <iostream>
using namespace std;

int main (){

    for (int baris = 5; baris >= 1; baris--){
        for (int angka = 10; angka >= 10 - (baris -1); angka--){
            cout << angka << "";
        }
        cout << endl;
    }

    return 0;
}