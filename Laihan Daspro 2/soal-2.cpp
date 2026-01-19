#include <iostream>
#include <cmath>

using namespace std;

int main () {

    //

    int a;
    int b;
    int c;
    int x;

    cout<<"Masukkan nilai a"<<endl;
    cin>>a;

    cout<<"Masukkan nilai b"<<endl;
    cin>>b;

    cout<<"Masukkan nilai c"<<endl;
    cin>>c;

    cout<<"Masukkan nilai x"<<endl;
    cin>>x;

    int y = (a*pow(x,2))+(b*x)+c ;

    cout<<"Hasil dari y= ax^2+bx+c = "<<y<<endl;

    return 0;
}