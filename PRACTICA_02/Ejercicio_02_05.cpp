// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 5

// Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a 240), determinar la mayor estatura, la estatura más baja y el promedio 
// de estaturas

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N, a =0, b=240;
    double c=0;
    cout << "Ingrese la cantidad de personas: ";
    cin >> N;
    int list[N];
    srand(time(0));
    cout << "Estaturas:" << endl;
    for (int i = 0; i < N; ++i) {
        list[i] = rand() % 191 + 50;  // Generar numbs entre 50 y 240
        cout << list[i] << " ";
        a = max(a, list[i]);
        b = min(b, list[i]);
        c += list[i];
    }
    double prom = c / N;
    cout << "\nMayor: " << a << " cm" << endl;
    cout << "Menor: " << b << " cm" << endl;
    cout << "Promedio: " << prom << " cm" << endl;

    return 0;
}
