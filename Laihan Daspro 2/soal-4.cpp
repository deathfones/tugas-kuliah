#include <iostream>

using namespace std;

int main () {

    //

    cout<<"Masukkan suhu dalam celcius"<<endl;
    float c;

    cin>>c;

    float F =(9.0/5.0*c)+32;
    float K =c+273.0;
    float R =(4.0/5.0*c);

    cout<<"Suhu dari celcius "<<c<<" adalah "<<F<<" Fahrenheit "<<endl;
    cout<<"Suhu dari celcius "<<c<<" adalah "<<K<<" Kelvin "<<endl;
    cout<<"Suhu dari celcius "<<c<<" adalah "<<R<<" Reamur "<<endl;


    return 0;
}