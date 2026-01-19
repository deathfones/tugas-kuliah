#include <iostream>
using namespace std;

int main(){
    int jmlAngka, angka, max;

    cout << "Masukkan jumlah angka : ";
    cin >> jmlAngka;

    cout<<"Angka ke 1 :";
    cin >> angka; 
    max = angka;

    for(int i = 2; i <= jmlAngka; i++){
        cout << "Angka " << i << ":";
        cin >> angka;
        if(angka > max){
            max = angka;
        }
    }
    
    cout << "Angka terbesar adalah : " << max << endl;
    return 0;
}
