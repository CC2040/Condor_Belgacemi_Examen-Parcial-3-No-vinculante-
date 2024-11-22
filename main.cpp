#include "Estudiante/Estudiante.h"


int main() {

    Estudiante estudiante1("Carlos",15,9.10,{"Matematicas","Ingles"});
    estudiante1.mostrarEstudianteinicio();

    // Registrar algunas asistencias (errores manejados internamente)
    estudiante1.registrarAsistencia("2024-11-22", "Matematicas", "Asistio");
    estudiante1.registrarAsistencia("2024-11-21", "Ingles", "Falta");
    //estudiante1.registrarAsistencia("2024-11-21", "Historia", "Falta");// Materia no registrada
    //estudiante1.registrarAsistencia("2024/11/22", "Ingles", "Falta");//Fecha incorrecta

    estudiante1.materiasEstudiante(estudiante1);
    estudiante1.mostrarEstudiantefinal();
    return 0;
}