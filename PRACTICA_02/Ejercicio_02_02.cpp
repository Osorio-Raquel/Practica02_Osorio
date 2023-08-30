// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 2

// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros, determine el porcentaje de números pares positivos e impares negativos.

#include <iostream>

using namespace std;

int main() {
    const int N = 10;  // Tamaño del arreglo
    int lista[N] = {7, 0, -7, 6, -3, 6, 24, 4, 9, -12}; 
    double pares = 0, impares = 0;
    for (int i = 0; i < N; ++i) {
        if (lista[i] > 0 and lista[i] % 2 == 0) {
            pares++;
        } else if (lista[i] < 0 and lista[i] % 2 != 0) {
            impares++;
        }
    }
    double x = (pares/ N) * 100, y = (impares/ N) * 100;
    cout << "Porcentaje de números pares positivos: " << x << "%" << endl;
    cout << "Porcentaje de números impares negativos: " << y << "%" << endl;

    return 0;
}

