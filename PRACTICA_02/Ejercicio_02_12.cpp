// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 27/08/2023

// Fecha modificación: 31/08/2023

// Número de ejercicio: 12

// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro contiene los nombres de estos minerales, para obtener:
// - Buscar por nombre de mineral y desplegar la producción
// - Ordenar del mayor al menor (producción) y mostrar:
// Mineral Produccion ™
// SN 998.000
// SB 876.500
// AU 786.670
// PT 636.143
// AG 135.567
// CU 109.412

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int l = 6;
    const char* p[l] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    const float q[l] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};
    char e[3];
    cout << "Ingrese el mineral que desea desplegar: ";
    cin >> e;
    bool x = false;
    for (int i = 0; i < l; i++) {
        if (e[0] == p[i][0] and e[1] == p[i][1]) {//comparo el input con los valores d ela lista de minerales
            cout << "Produccion de " << p[i] << "= " << q[i] << endl;
            x = true;
            break;
        }
    }
    if (!x) {
        cout << "Mineral no encontrado." << endl;
    }
    cout << "Tabla total" << endl;
    cout << "Mineral\tProduccion" << endl;
    for (int i = 0; i < l; i++) {
        cout << p[i] << "\t" << q[i] << endl;
    }
    return 0;
}
