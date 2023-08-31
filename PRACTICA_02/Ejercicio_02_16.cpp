// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 16

// Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos leídos por el teclado. Copia los elementos del vector en otro vector pero en orden 
// inverso, y muéstralo por la pantalla.

#include <iostream>
#include <string>

using namespace std;

int main() {
    const int N = 5;
    string a[N],b[N];
    cout << "Ingrese los 5 datos de la lista: " << endl;
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < N; ++i) {//inversion
        b[N - i - 1] = a[i];
    }
    cout << "Linta invertida:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << b[i] << " ";
    }
    return 0;
}
