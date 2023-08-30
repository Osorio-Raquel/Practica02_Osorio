// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 9

// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
// Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un desempeño mayor
// con relación al promedio del curso.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> a;
    int cals[a], maxCal = 0, minCal = 100;
    float totalCals = 0, p;
    string nombres[a], c[a], nm, nn, mejor;

    for (int i = 0; i < a; i++) {
        cout << "Estudiante numero " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> nombres[i];
        cout << "Calificación: ";
        cin >> cals[i];
        totalCals += cals[i];
        if (cals[i] > maxCal) {
            maxCal = cals[i];
            nm = nombres[i];
        }
        if (cals[i] < minCal) {
            minCal = cals[i];
            nn = nombres[i];
        }
        cout << "Sigla de la carrera: ";
        cin >> c[i];
    }
    p = totalCals / a;

    for (int i = 0; i < a; i++) {
        if (cals[i] > p) {
            mejor = c[i];
            break;
        }
    }
    cout << "Mayor nota: " << nm << endl;
    cout << "Menor nota: " << nn << endl;
    cout << "Carrera con mejor desempeño: " << mejor << endl;

    return 0;
}
