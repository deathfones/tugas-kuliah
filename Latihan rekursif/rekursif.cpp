#include <iostream>
using namespace std;

int kali (int a, int b)
{   
    if (b==1)
    {
        cout << a <<" = ";
        return a;
    }
    else {
        cout << a <<" + "; 
        return a+kali(a,b-1);
    }

}

int main () {
    cout<< kali(2,3);
    return 0;
}