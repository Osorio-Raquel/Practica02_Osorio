// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 7

// Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno. Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y
// “Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se tenga el mismo valor para todos los elementos.

#include <iostream>
#include <string>

using namespace std;

const int N = 7;  // Tamaño de los vectores

int main() {
    string a[N] = {"Alina", "Kael", "Irina", "Favian", "Fabian", "Joaquin", "Leonardo"};
    string b[N] = {"Alina", "Kael", "Irina", "Favian", "Fabian", "Joaquin", "Leonardo"};
    
    bool iguales = true;
    
    for (int i = 0; i < N; ++i) {
        if (a[i] != b[i]) {
            iguales = false;
            break;
        }
    }
    
    if (iguales) {
        cout << "Iguales" << endl;
    } else {
        cout << "Diferentes" << endl;
    }
    
    return 0;
}

