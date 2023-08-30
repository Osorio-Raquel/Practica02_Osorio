// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 21

// Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.

#include <iostream>
using namespace std;

int main() {
    int a = 5, vector1[a], vector2[a], vector3[a];

    cout << "Ingrese los numeros de la Lista 1:" << endl;
    for (int i = 0; i < a; i++) {
        cin >> vector1[i];
    }
    cout << "Ingrese los numeros de la Lista 2:" << endl;
    for (int i = 0; i < a; i++) {
        cin >> vector2[i];
    }
    for (int i = 0; i < a; i++) { // Calculo vector3
        vector3[i] = vector1[i] + vector2[i];
    }
    cout << "El vector3 es:" << endl;
    for (int i = 0; i < a; i++) {
        cout << vector3[i] << " ";
    }
    return 0;
}
