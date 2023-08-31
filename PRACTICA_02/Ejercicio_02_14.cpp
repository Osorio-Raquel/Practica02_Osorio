// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 14

// Problema planteado: Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga los números capicúa contenidos en el primero.

#include <iostream>
#include <string>

using namespace std;

bool d(int n) { //funcion capicua
    int r = n, i = 0;
    while (n > 0) {
        int digito = n % 10;
        i = i * 10 + digito;
        n /= 10;
    }
    return r == i;
}
int main() {
    int N, M;
    cout << "Ingrese el valor del limite inferior y superior: ";
    cin >> N >>  M;
    cout << "Capicuas en el rango " << N << " a " << M << ": ";
    bool g = false;

    for (int n = N; n <= M; ++n) {
        if (d(n)) {
            cout << n << " ";
            g = true;
        }
    }
    if (!g) {
        cout << "No se encontraron apicuas en el rango ";
    }
    cout << endl;

    return 0;
}
