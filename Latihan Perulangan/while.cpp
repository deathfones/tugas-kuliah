#include <iostream>
using namespace std;

int main(){
    int jmlAngka, angka, max, i = 1;

    cout << "Masukkan jumlah angka : ";
    cin >> jmlAngka;

    cout<<"Angka ke 1 :";
    cin >> angka; 
    max = angka;
    i++;

    while(i <= jmlAngka){
        cout << "Angka " << i << ":";
        cin >> angka;
        
        if(angka > max){
            max = angka;
        }

        i++;
    }
    
    cout << "Angka terbesar adalah : " << max << endl;
    return 0;
}
