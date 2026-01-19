#include <iostream>
using namespace std;

int main () {

    int jumlah;
    cout<<"Masukkan Jumlah uang"<<endl;
    cin>>jumlah;

    int ribuan = jumlah/1000;
    int ratusan = (jumlah%1000)/100;
    int puluhan = (jumlah%1000)/10;

    cout<<"Dalam jumlah uang "<<jumlah<<" terdapat "<<"Ribuan "<<ribuan<<endl;
    cout<<"Dalam jumlah uang "<<jumlah<<" terdapat "<<"Ratusan "<<ratusan<<endl;
    cout<<"Dalam jumlah uang "<<jumlah<<" terdapat "<<"Puluhan "<<puluhan<<endl;

    return 0;
}