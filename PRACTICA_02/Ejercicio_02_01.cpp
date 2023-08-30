// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 1

// Problema planteado: Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de los componentes de índice par y la resta de los componentes de índice impar.

#include <iostream>
#include <cstdlib> 
#include <ctime>   //Para que todos los numeros cambien y no se guarden en la memoria

using namespace std;

int main() {
    int N;
    cout << "Ingrese el tamaño de las listas: ";
    cin >> N;
    srand(time(0));
    int a[N], b[N];
    cout << "Lista A:" << endl;
    for (int i = 0; i < N; ++i) {
        a[i] = rand() % 100;  
        cout << a[i] << ", ";
    }
    cout << "\nLista b:" << endl;
    for (int i = 0; i < N; ++i) {
        b[i] = rand() % 100; 
        cout << b[i] << ", ";
    }
    int suma[N];
    int resta[N];
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            suma[i] = a[i] + b[i];
        } else {
            resta[i] = a[i] - b[i];
        }
    }
    cout << "\nSuma de elementos en posiciones pares: ";
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            cout << suma[i] << ", ";
        }
    }
    cout << "\nResta de elementos en posiciones impares: ";
    for (int i = 0; i < N; ++i) {
        if (i % 2 != 0) {
            cout << resta[i] << ", ";
        }
    }
    return 0;
}

