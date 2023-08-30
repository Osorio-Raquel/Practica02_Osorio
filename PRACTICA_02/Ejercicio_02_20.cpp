// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 20

// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. 
// Para simplificarlo vamos a suponer que febrero tiene 28 días

#include <iostream>
#include <string>
using namespace std;

int main() {
    string m[] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    int n;
    cout << "Ingrese el numero de mes: ";
    cin >> n;
    if (n >= 1 and n <= 12) {
        string a = m[n - 1]; //obtengo el nombre del mes
        int d = 31;
        if (n == 2) {
            d = 28; // para febrero
        } else if (n == 4 or n == 6 or n == 9 or n == 11) {
            d = 30;
        }
        cout << "Mes: " << a << " \nDias: " << d << endl;
    } else {
        cout << "El nuemro debe ser entre 1 y 12." << endl;
    }

    return 0;
}

