#include "Estudiante/Estudiante.h"

int main() {

    Estudiante estudiante1("Carlos",15,9.10,{"Matematicas","Ingles"});
    estudiante1.mostrarEstudianteinicio();
    // Registrar algunas asistencias
    estudiante1.registrarAsistencia("2024-11-22", "Matematicas", "Asistió");
    estudiante1.registrarAsistencia("2024-11-21", "Ingles", "Falta");

    estudiante1.materiasEstudiante(estudiante1);
    estudiante1.mostrarEstudiantefinal();
    return 0;
}