#include <iostream>
using namespace std;

int main(){

    int n = 0, m = 1, i = 10, sucesion;
    cout << "Serie de Fibonacchi, ingrese un numero n" << endl;

    do{
    i--;

    cout << n << endl;
    sucesion = n;
    n = m;
    m = sucesion + m;
    } while (i != 0);
    
    return 0;
}

/*
0 1 1 2 3 6 9 15 24 39

n = m
0 + 1
1 + 1
2 + 3
*/