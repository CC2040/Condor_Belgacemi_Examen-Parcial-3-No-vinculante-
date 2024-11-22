#ifndef ASISTENCIA_H
#define ASISTENCIA_H


#include <string>
#include <vector>

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
};

#endif //ASISTENCIA_H
