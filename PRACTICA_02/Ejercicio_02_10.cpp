// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 31/08/2023

// Número de ejercicio: 10

// Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que contiene los nombres de estos departamentos, indique el nombre del departamento 
// que tiene la mayor población y el nombre del departamento que tiene la menor población.

#include <iostream>
using namespace std;

int main() {
    int max = 0, min = 0;
    const int b = 9;
    int p[b];
    const char* n[b] = {
        "La Paz", "Cochabamba", "Santa Cruz", "Potosi",
        "Oruro", "Pando", "Beni", "Tarija", "Chuquisaca" };

    for (int i = 0; i < b; ++i) {
        cout << "Ingresa la poblacion de " << n[i] << ": ";
        cin >> p[i];
    }
    for (int i = 1; i < b; ++i) { // seleccion de el minimo y el maximo posiciones
        if (p[i] > p[max]) {
            max = i;
        }
        if (p[i] < p[min]) {
            min = i;
        }
    }
    cout << "El departamento con la menor poblacion: " << n[min] << endl;
    cout << "El departamento con la mayor poblacion: " << n[max] << endl;
    return 0;
}



