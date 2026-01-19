#include <iostream>
using namespace std;

 int main () {
    int a;
    int b;
    int inc;
    cout<<"Masukkan nilai a: ";
    cin>>a;
    cout<<"Masukkan nilai b: ";
    cin>>b;
    cout<<"Masukkan increment value: ";
    cin>>inc;

    for(int i=a; i<=b; i+=inc){
        cout<<i<<"";
    }

    return 0;
 }