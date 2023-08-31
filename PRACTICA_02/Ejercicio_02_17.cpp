// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 17

// Problema planteado: - Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno (comprendidas entre 0 y 100). A continuación, debe mostrar todas las notas, 
// la nota media, la nota más alta que ha sacado y la menor.

#include <iostream>
using namespace std;

int main() {
    int a[5], x = 0, y = 100; //para sacar el minimo y el maximo
    double s = 0;
    cout << "Ingresen las notas" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        s += a[i];
        if (a[i] > x) {
            x = a[i];
        }
        if (a[i] < y) {
            y = a[i];
        }
    }
    cout << "Notas: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " - ";
    }
    cout << endl;
    
    cout << "La menor nota: " << y << endl;
    cout << "La mayor nota: " << x << endl;
    cout << "La nota media: " << s / 5 << endl;
    return 0;
}
