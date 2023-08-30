// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 22

// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "ingrese el tamaño de la lista: ";
    cin >> a;
    int vector1[a], vector2[a], vector3[a];

    cout << "Ingrese los numeros de la Lista 1:" << endl;
    for (int i = 0; i < a; i++) {
        cin >> vector1[i];
    }
    cout << "Ingrese los numeros de la Lista 2:" << endl;
    for (int i = 0; i < a; i++) {
        cin >> vector2[i];
    }
    for (int i = 0; i < a; i++) { // Calculo vector3
        vector3[i] = vector1[i] * vector2[i];
    }
    cout << "La multiplicacion resultante es:" << endl;
    for (int i = 0; i < a; i++) {
        cout << vector3[i] << " ";
    }
    return 0;
}
