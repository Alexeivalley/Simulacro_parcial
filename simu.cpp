#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Cuenta regresiva" << endl;
    cin >> n;

    for (int i = 1; i <= n ; i++){

        for (int espacio = i; espacio <= n; espacio ++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout << "+";
        }
        cout << endl;
    }
    
    return 0;
}