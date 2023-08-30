// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 3

// Problema planteado:  Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el rango de A - B y determine cuántos de estos elementos son números primos. 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool e(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int N =50; 
    int A, B, p;
    cout << "Ingrese el primer valor y el segundo valor: ";
    cin >> A >> B;
    srand(time(0));
    int a[N];
    cout << "Lista:" << endl;
    for (int i = 0; i < N; ++i) {
        a[i] = rand() % (B-A) ;  // Generar num aleatorios en el rango de A - B
        cout << a[i] << " ";
    }
    for (int i = 0; i < N; ++i) {
        if (e(a[i])) {
            p++;
        }
    }
    cout << "\nLa cantidad de numeros primos es: " << p << endl;
    return 0;
}
