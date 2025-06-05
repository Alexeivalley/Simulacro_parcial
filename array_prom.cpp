#include <iostream>
using namespace std;

int main(){

    double prom = 0;
    double n[5];
    cout << "Dame 5 números y te dare el promedio" << endl;

    for (int i = 5; i > 0; --i){
        
        cout << "ingresa el numero: " << i << endl;
        cin >> n[i];
        prom += n[i];
    }

    cout << "Promedio es: " << prom;

    return 0;
}

//Búsqueda de un Número
//Pide N números, guárdalos en un arreglo y busca si un número dado por el usuario está en él.