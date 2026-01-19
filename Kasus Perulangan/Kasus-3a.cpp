#include <iostream>
using namespace std;

 int main () {
    int a;
    int b;
    cout<<"Masukkan nilai b: ";
    cin>>b;
    cout<<"Masukkan nila a: ";
    cin>>a;

    for(int i=b; i>=a; i--){
        cout<<i<<"";
    }

    return 0;
 }