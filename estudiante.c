#include "estudiante.h"

void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
    printf("Materias: ");
    for (int i = 0; i < estudiante.numMaterias; i++) {
        printf("%s ", estudiante.materias[i]);
    }
    printf("\n");
}

void agregarMateria(struct Estudiante* estudiante, const char* materia) {
    if (estudiante->numMaterias < MAX_MATERIAS) {
        strcpy(estudiante->materias[estudiante->numMaterias], materia);
        estudiante->numMaterias++;
    } else {
        printf("No se pueden agregar más materias.\n");
    }
}

void mostrarAsistencia(struct Asistencia asistencia) {
    printf("Fecha: %s, Materia: %s, Estado: %s\n", asistencia.fecha, asistencia.materia, asistencia.estado);
}