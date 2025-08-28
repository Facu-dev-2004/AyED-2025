#include <iostream>
#include "sensor.h"

using namespace std;

int main() {
    // Instancia un objeto de la clase Sensor
    Sensor SCocina;
    SCocina.nombre = "TempCocina";
    SCocina.unidad = 28.4;
    SCocina.valor = "C";

    Sensor* cocinaP = new Sensor();
    cocinaP -> nombre = "TempCocina";
    cocinaP -> unidad = 29.3;
    cocinaP -> valor = "C";

    return 0;
}
