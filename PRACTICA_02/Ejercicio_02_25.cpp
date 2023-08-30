// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 25

// Problema planteado: Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 e indique el mayor elemento, el menor elemento y el promedio.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N, a =0, b=240;
    double c=0;
    cout << "Ingrese la cantidad de elemtos: ";
    cin >> N;
    int list[N];
    srand(time(0));
    for (int i = 0; i < N; ++i) {
        list[i] = rand() % 100 + 1;  // Generar lso numeros
        cout << list[i] << " ";
        a = max(a, list[i]);
        b = min(b, list[i]);
        c += list[i];
    }
    double prom = c / N;
    cout << "\nMayor elemento: " << a << endl;
    cout << "Menor elemento: " << b << endl;
    cout << "Promedio: " << prom << endl;
    return 0;
}
