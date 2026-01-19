#include <iostream>

using namespace std;

int main () {

    //

    cout<<"Masukkan 5 bilangan" <<endl;

    float a;
    float b;
    float c;
    float d;
    float e;

    cout<<"Masukkan Nilai a"<<endl;
    cin>>a;

    cout<<"Masukkan Nilai b"<<endl;
    cin>>b;

    cout<<"Masukkan Nilai c"<<endl;
    cin>>c;

    cout<<"Masukkan Nilai d"<<endl;
    cin>>d;

    cout<<"Masukkan Nilai e"<<endl;
    cin>>e;

    float sum = a+b+c+d+e;
    float ave = (a+b+c+d+e)/5.0;

    cout<<"Hasil dari "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<e<<" = "<<sum<<endl;
    cout<<"Rata rata dari "<<a<<","<<b<<","<<c<<","<<d<<","<<e<<" = "<<ave<<endl;

      return 0;
}