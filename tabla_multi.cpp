#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Ingrese un numero n y te dire su tabla de multiplicar" << endl;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " X " << n << " = " << i*n; cout << endl;
    }

    return 0;
}