#include <iostream>

using namespace std;

int main () {

    //

    float a;
    float b;
    float c;
    float d;
    float e;

    cout<<"Masukkan nilai a"<<endl;
    cin>>a;

    cout<<"Masukkan nilai b"<<endl;
    cin>>b;

    cout<<"Masukkan nilai c"<<endl;
    cin>>c;

    cout<<"Masukkan nilai d"<<endl;
    cin>>d;

    cout<<"Masukkan nilai e"<<endl;
    cin>>e;

    float sum =a+b+c+d+e;
    float ave =(a+b+c+d+e)/5.0;

    cout<<"Hasil dari "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<e<<" = "<<sum<<endl;
    cout<<"Rata rata dari "<<a<<","<<b<<","<<c<<","<<d<<","<<e<<" = "<<ave<<endl;

    return 0;
}