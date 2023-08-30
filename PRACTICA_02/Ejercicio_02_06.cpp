// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 6

// Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos intercalados.

#include <iostream>
using namespace std;

const int N = 7; 

int main() {
    int a[N] = {1, 2, 91, 4, 5, 7, 0};
    int b[N] = {6, 36, 8, 19, 10, 707, 606};
    int c[2 * N];  // Tamaño del tercer arreglo

    for (int i = 0; i < N; ++i) {
        c[2 * i] = a[i];  
        c[2 * i + 1] = b[i];    
    }
    cout << "Lista 1: ";
    for (int i = 0; i < N; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Lista 2: ";
    for (int i = 0; i < N; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "Lista Final:" << endl;
    for (int i = 0; i < 2 * N; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
