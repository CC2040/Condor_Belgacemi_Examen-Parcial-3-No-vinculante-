#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ESTUDIANTES 100
#define MAX_MATERIAS 10

struct Estudiante {
    char nombre[50];
    int edad;
    double promedio;
    int numMaterias;
    char materias[MAX_MATERIAS][50]; // Array to hold subjects
};

int main() {
    struct Estudiante estudiantes[MAX_ESTUDIANTES];
    int numEstudiantes = 0;

    while (numEstudiantes < MAX_ESTUDIANTES) {
        struct Estudiante estudiante;
        estudiante.numMaterias = 0;

        // Solicitar datos del estudiante
        printf("Ingrese el nombre del estudiante: ");
        fgets(estudiante.nombre, sizeof(estudiante.nombre), stdin);
        estudiante.nombre[strcspn(estudiante.nombre, "\n")] = 0; // Eliminar el salto de línea

        // Verificación de edad
        do {
            printf("Ingrese la edad del estudiante (debe ser un número positivo): ");
            if (scanf("%d", &estudiante.edad) != 1 || estudiante.edad < 0) {
                printf("Edad inválida. ");
                while (getchar() != '\n'); // Limpiar buffer
            } else {
                break; // Salir del bucle solo si la entrada es válida
            }
        } while (1);

        // Verificación de promedio
        do {
            printf("Ingrese el promedio del estudiante (debe estar entre 0 y 10): ");
            if (scanf("%lf", &estudiante.promedio) != 1 || estudiante.promedio < 0 || estudiante.promedio > 10) {
                printf("Promedio inválido. ");
                while (getchar() != '\n'); // Limpiar buffer
            } else {
                break; // Salir del bucle solo si la entrada es válida
            }
        } while (1);

        getchar(); // Limpiar el buffer de entrada

        // Ingresar materias
        int numMaterias;
        do {
            printf("Ingrese el número de materias (máximo %d): ", MAX_MATERIAS);
            if (scanf("%d", &numMaterias) != 1 || numMaterias <= 0 || numMaterias > MAX_MATERIAS) {
                printf("Número de materias inválido. ");
                while (getchar() != '\n'); // Limpiar buffer
            } else {
                break; // Salir del bucle solo si la entrada es válida
            }
        } while (1);

        // Ingresar nombres de materias
        for (int i = 0; i < numMaterias; i++) {
            printf("Ingrese el nombre de la materia %d: ", i + 1);
            getchar(); // Limpiar el buffer de entrada
            fgets(estudiante.materias[i], sizeof(estudiante.materias[i]), stdin);
            estudiante.materias[i][strcspn(estudiante.materias[i], "\n")] = 0; // Eliminar el salto de línea
        }

        // Almacenar el estudiante en el array
        estudiantes[numEstudiantes++] = estudiante;

        // Confirmación de ingreso
        printf("Estudiante ingresado exitosamente.\n");
    }

    return 0;
}
