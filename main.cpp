#include "Estudiante/Estudiante.h"

int main() {

    Estudiante estudiante1("Carlos",15,9.10,{"Matematicas","Ingles"});
    estudiante1.mostrarEstudianteinicio();
    estudiante1.materiasEstudiante(estudiante1);
    estudiante1.mostrarEstudiantefinal();
    return 0;
}