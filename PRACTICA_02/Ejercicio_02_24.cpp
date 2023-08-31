// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 31/08/2023

// Número de ejercicio: 24

// Problema planteado: Leer una cadena en mayúsculas y cámbielas en minúscula.

#include <iostream>
using namespace std;
int main() {
    const int a = 999; 
    char d[a];
    cout << "Ingresa una cadena en mayúsculas: ";
    cin.getline(d, a);
    for (int i = 0; d[i] != '\0'; ++i) { //
        if (d[i] >= 'A' and d[i] <= 'Z') {// transformar el string
            d[i] = d[i] + ('a' - 'A');
        }
    }
    cout << "La cadena en minúsculas es: " << d << endl;

    return 0;
}


