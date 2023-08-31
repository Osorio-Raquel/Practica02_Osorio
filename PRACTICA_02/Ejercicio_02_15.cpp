// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 15

// Problema planteado: Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada 
// elemento del vector junto con su cuadrado y su cubo.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int N = 10;
    int a[N], b[N], c[N], i;
    srand(time(0)); 
    for ( i = 0; i < N; ++i) {
        a[i] = rand() % 11;
    }
    for ( i = 0; i < N; ++i) {
        b[i] = a[i] * a[i];
        c[i] = a[i] * a[i] * a[i];//creacion de las listas
    }
    cout << "Lista: " << endl;
    for ( i = 0; i < N; ++i) {
        cout << a[i]<< " ";
    }
    cout << endl;
    cout << "Lista de cuadrados: " << endl; 
    for ( i = 0; i < N; ++i) {
        cout << b[i]<< " ";
    }
    cout << endl;
    cout << "Listade cubos: " << endl;
    for ( i = 0; i < N; ++i) {
        cout << c[i]<< " ";
    }
    cout << endl;

    return 0;
}
