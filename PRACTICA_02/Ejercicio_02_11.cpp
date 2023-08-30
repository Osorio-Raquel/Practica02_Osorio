// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 11

// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de este arreglo determine la desviación típica.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int a = 99999; 
    int e[a], d, c = 0;
    double s = 0, x = 0.0, p, dif, y;
    cout << "Ingrese las edades de las personas y -1 para terminar:" << endl;
    while (true) {
        cin >> d;
        if (d == -1) {
            break;
        }
        if (c < a) {
            e[c] = d;
            s += d;
            c++;
        } 
    }
    p = s / c;
    for (int i = 0; i < c; i++) {
        dif = e[i] - p;
        x += dif * dif;
    }
    y = sqrt(x / c);

    cout << "La desviacoin estandar es: " << y << endl;

    return 0;
}
