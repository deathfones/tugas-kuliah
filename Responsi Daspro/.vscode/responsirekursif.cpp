#include <iostream>
using namespace std;

//Fungsi rekursif ganjil genap
void hitungGanjilGenap(int n, int current, int &ganjil, int &genap) {
    if (current > n) return;
    if (current % 2 == 0) genap++;
    else ganjil++;
    hitungGanjilGenap(n, current + 1, ganjil, genap);
}
 
//Fungsi Rekursif penjumlahan A+1 sebanyak B kali
int tambahRekursif (int a, int b){
    if ( b == 0) return a;
    return 1 + tambahRekursif(a, b - 1);
}
int main (){

    //Bagian rekursif ganjil genap
    int n, ganjil = 0, genap = 0;
    cout << "\n--- Tugas Rekursif Ganjil Genap ---" << endl;
    cout << "Masukkan Jumlah urutan data: "; cin >> n;
    hitungGanjilGenap(n, 1, ganjil, genap);
    cout << "Jumlah Bilangan Ganjil : " << ganjil << endl;
    cout << "Jumlah Bilangan Genap  : " << genap << endl;

    //Bagian rekursif penjumlahan
    int a,b;
    cout << "\n--- Tugas Rekursif Penjumlahan A+b ---" << endl;
    cout << "Masukkan Bilangan A: "; cin >> a;
    cout << "Masukkan Bilangan B: "; cin >> b;
    cout << "Hasil Jumlah(A+B) : " << tambahRekursif(a,b) << endl;

    return 0;
}