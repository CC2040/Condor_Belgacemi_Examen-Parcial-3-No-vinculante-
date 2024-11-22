
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MATERIAS 10
// Estructura Estudiante
struct Estudiante {
    char nombre[100];
    int edad;
    double promedio;
    char materias[MAX_MATERIAS][100];
    int numMaterias;
};

// Funciones relacionadas con Estudiante
void mostrarEstudiante(struct Estudiante estudiante);
void agregarMateria(struct Estudiante* estudiante, const char* materia);

// Estructura Asistencia
struct Asistencia {
    char fecha[11]; // "YYYY-MM-DD\0"
    char materia[100];
    char estado[20]; // "asistió", "falta", "tardanza"
};

// Función para mostrar asistencia
void mostrarAsistencia(struct Asistencia asistencia);

#endif //ESTUDIANTE_H