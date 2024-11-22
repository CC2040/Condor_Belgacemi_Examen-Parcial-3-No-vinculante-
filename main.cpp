#include "Estudiante/Estudiante.h"
#include <iostream>

int main() {

    Estudiante estudiante1("Carlos",15,9.10,{"Matematicas","Ingles"});
    estudiante1.mostrarEstudianteinicio();
    // Registrar algunas asistencias
    try {
        estudiante1.registrarAsistencia("2024-11-22", "Matematicas", "Asistio");
        estudiante1.registrarAsistencia("2024-11-21", "Lengua", "Falta");
    }
    catch (const FechaInvalidaException& e) {
        cout << e.what() << endl;  // Maneja error en el formato de la fecha
    }
    catch (const MateriaNoRegistradaException& e) {
        cout << e.what() << endl;  // Maneja error en materia no registrada
    }

    estudiante1.materiasEstudiante(estudiante1);
    estudiante1.mostrarEstudiantefinal();
    return 0;
}