#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Input n : ";
    cin >> n;

    int angkaArray[n];

    for (int i = 0; i < n; i++){
        cout << "Input ke -" << i+1 << ": ";
        cin >> angkaArray[i];
    }

    cout << endl;
    cout << "Hasil Array : ";

    for (int i = 0; i < n; i++){
        cout << angkaArray[i] << " ";
    }
    cout << endl;

    return 0;
}