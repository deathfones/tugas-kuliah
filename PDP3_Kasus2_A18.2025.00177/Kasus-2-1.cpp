#include <iostream>

using namespace std;

int main () {

    int x=5;
    int y=3;

    cout<<"Diketahui x = "<<x<<" dan y = "<<y<<", maka "<<endl;

    //1
    x+=1;
    cout<<"1. x+=1 -> x = "<<x<<", y = "<<y<<endl;

    //2
    x+=y;
    cout<<"2. x+=y -> x = "<<x<<", y = "<<y<<endl;

    //3
    y-=1;
    cout<<"3. y-=1 -> x = "<<x<<", y = "<<y<<endl;

    //4
    y-=x;
    cout<<"4. y-=x -> x = "<<x<<", y = "<<y<<endl;
    
    //5
    x*=y+1;
    cout<<"5. x*=y+1 -> x = "<<x<<", y = "<<y<<endl;

    //6
    y/=3;
    cout<<"6. y/=3 -> x = "<<x<<", y = "<<y<<endl;


    return 0;
}