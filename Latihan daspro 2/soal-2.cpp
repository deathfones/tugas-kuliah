#include <iostream>
#include <cmath>

using namespace std;

int main () {

    //

    cout<<"Soal.2 y=. ax^2+bx+c = " <<endl;

    int a;
    int b;
    int c;
    int x;

    cout<<"Masukkan Nilai a"<<endl;
    cin>>a;

    cout<<"Masukkan Nilai b"<<endl;
    cin>>b;

    cout<<"Masukkan Nilai c"<<endl;
    cin>>c;

    cout<<"Masukkan Nilai x"<<endl;
    cin>>x;

    int y = (a*pow(x,2))+(b*x)+c;

    cout<<"Hasil dari y=. ax^2+bx+c = "<<y<<endl;

      return 0;
}