// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 13

// Problema planteado: Almacenar en un arreglo los n primeros números primos.

#include <iostream>
using namespace std;

bool e(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, num = 2, c = 0; // inicia los numeros primos
    cout << "Ingrese la cantidad de numeros primos que desea: ";
    cin >> n;

    int a[n]; 

    while (c < n) {
        if (e(num)) {
            a[c] = num;
            ++c;
        }
        ++num;
    }

    cout << "Los numeros primos son: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
