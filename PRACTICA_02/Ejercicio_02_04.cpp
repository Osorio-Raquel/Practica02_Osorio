// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 4

// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine: el porcentaje de mayores (>=18 años) y menores de edad (<18 años). 
// Las edades al azar deben ser generadas a partir de 1 a 110 años.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int N = 50; //la constante del tamaño de la lista
    int edades[N];
    double m = 0;
    srand(time(0));
    cout << "Lista:" << endl;

    for (int i = 0; i < N; ++i) {
        edades[i] = rand() % 111; 
        cout << edades[i] << " ";
        if (edades[i] >= 18) {
            m++;
        }
    }
    double a = (m / N) * 100;
    double b = 100 - a;
    cout << "\nPorcentaje de pesonas mayores de edad: " << a << "%" << endl;
    cout << "Porcentaje de personas menores de edad: " << b << "%" << endl;

    return 0;
}
