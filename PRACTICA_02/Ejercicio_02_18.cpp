// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 18

// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se debe 
// imprimir el vector (sólo los elementos introducidos).

#include <iostream>
using namespace std;

int main() {
    int q=10, n, c = 0, l[q];
    cout << "Ingrese los valores para parar ingrese un numero negativo:" << endl;
    while (c < q) {
        cin >> n;
        if (n < 0) {
            break;
        }
        l[c] = n;
        c++;
    }
    cout << "LIsta:" << endl;
    for (int i = 0; i < c; i++) {
        cout << l[i] << "\t";
    }
    cout << endl;
    return 0;
}
