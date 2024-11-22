#ifndef ASISTENCIA_H
#define ASISTENCIA_H


#include <string>
#include <vector>
#include "../Excepciones/Excepciones.h"

using namespace std;

class Asistencia {
public:
    string fecha;
    string materia;
    string estado; // "Asistió", "Falta", "Tardanza"

    // Constructor
    Asistencia(string f, string m, string e) : fecha(f), materia(m), estado(e) {}

    // Métodos para obtener y modificar la asistencia
    void setFecha(string f) { fecha = f; }
    string getFecha() const { return fecha; }

    void setMateria(string m) { materia = m; }
    string getMateria() const { return materia; }

    void setEstado(string e) { estado = e; }
    string getEstado() const { return estado; }

    // Validación del formato de la fecha
    void validarFecha() const {
        if (fecha.length() != 10 || fecha[2] != '/' || fecha[5] != '/') {
            throw FechaInvalidaException();
        }
    }
};

#endif //ASISTENCIA_H
