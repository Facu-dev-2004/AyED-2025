#ifndef SENSOR_H
#define SENSOR_H

#include <string>
using namespace std;
// Declarar un struct Sensor que tenga un nombre (string), valor (flotante) y unidad (string
struct Sensor {
    string nombre;
    float valor;
    string unidad;

};
// Prototipos
void imprimir(const Sensor* lista, int n);
int cargarDesdeArchivo(const string& ruta, Sensor* lista, int n);

#endif
