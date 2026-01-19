#include <iostream>

using namespace std;

int main () {

    int angka;
    cout<<"Masukkan sebuah angka"<<endl;
    cin>>angka;

    int terakhir = angka % 10;
    cout<<"Angka terakhir adalah "<<terakhir<<endl;


    return 0;
}