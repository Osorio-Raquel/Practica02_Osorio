// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejercicio: 8

// Problema planteado: Se tiene el arreglo
// Ventas:
// 0 1 2 10 11
// vene vfeb vmar . . vnov vdic
// Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que contiene los nombres de los meses:
// Meses:
// 0 1 2 10 11
// “Ene” “Feb” “Mar” . . “Nov” “Dic”
// Escriba un programa que obtenga:
// • ¿En qué mes(es) se dieron las ventas máximas de la empresa?
// • ¿A cuánto ascendieron las ventas máximas?
// • ¿Cuál fue el total de las ventas?
// Las ventas deben ser ingresadas por teclado.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int v[12], x = 0, y = -1, t = 0;
    string m[] = {"ene", "feb", "mar", "abr", "may", "jun", "jul", "ago", "sep", "oct", "nov", "dic"};
    cout << "Ingrese las ventas de cada mes: " << endl;
    
    for (int i = 0; i < 12; i++) {
        cout << m[i] << ": ";
        cin >> v[i];
        t += v[i];
        if (v[i] > x) { //seleacciona la venta maxima
            x = v[i];
            y = i;// pa pósicion de la venta maxima
        }
    }
    if (y != -1) {
        cout << "ventas maximas " << x << "." << endl;
        cout << "mes con ventas maximas " << m[y] << "." << endl;
    }
    cout << "El total es " << t << endl;

    return 0;
}
