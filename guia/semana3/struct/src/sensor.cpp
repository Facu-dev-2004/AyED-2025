#include "sensor.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void imprimir(const Sensor* lista, int n) {

    for(int i = 0; i < n: i++){
        cout << "Sensor[" << i << "]: " <<(lista + i) -> nombre << "=" << (lista + i) -> valor << " " << (lista + i) -> unidad << endl;
    }
}

int cargarDesdeArchivo(const string& ruta, Sensor* lista, int n) {
    ifstream in(ruta);
    if(!in) return 0;

    int count = 0;
    while (count < n && (in >> lista[count].nombre >> lista[count].valor >> lista[count].unidad))
    {
        count++:
    }

    return count;
}
