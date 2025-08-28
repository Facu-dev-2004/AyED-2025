#ifndef SENSOR_H
#define SENSOR_H

#include <string>

// Declarar una clase Sensor que tenga un nombre (string), valor (flotante) y unidad (string)
// Metodos para mostrar el sensor, cambiar el valor, cambiar el nombre.
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
