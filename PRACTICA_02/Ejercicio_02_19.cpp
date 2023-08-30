// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 19

// Problema planteado: Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior ordene los elementos de menor a mayor.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void sort(int a[], int b) {
    for (int i = 0; i < b - 1; i++) {
        for (int j = i + 1; j < b; j++) {
            if (a[j] < a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int x;
    cout << "Ingrese cuantos numeros necesita: ";
    cin >> x;
    int y[x];
    srand(time(0));
    cout << "Lista:" << endl;
    for (int i = 0; i < x; i++) {
        y[i] = rand() % 100; // Generar números entre 0 y 99
        cout << y[i] << " ";
    }
    cout << endl;
    sort(y, x);
    cout << "Lista ordenada:" << endl;
    for (int i = 0; i < x; i++) {
        cout << y[i] << " ";
    }
    cout << endl;
    return 0;
}

