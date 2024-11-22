#include "Estudiante.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Constructor por defecto
Estudiante::Estudiante() : nombre("Sin nombre"), edad(0),promedio(0),materias{"N/A"} {}

// Constructor con parámetros
Estudiante::Estudiante(string nombre, int edad,float promedio,vector<string> materias) : nombre(nombre), edad(edad), promedio(promedio), materias(materias) {}

// Métodos para establecer y obtener el nombre
void Estudiante::setNombre(string nombre) {
    this->nombre = nombre;
}

string Estudiante::getNombre() const {
    return nombre;
}

// Métodos para establecer y obtener la edad
void Estudiante::setEdad(int edad) {
    this->edad = edad;
}

int Estudiante::getEdad() const {
    return edad;
}

void Estudiante::setPromedio(float promedio) {
    this->promedio = promedio;
}

float Estudiante::getPromedio() const {
    return promedio;
}

void Estudiante::setMaterias(vector<string> materias) {
    this->materias = materias;
}

vector<string> Estudiante::getMaterias() const {
    return materias;
}

void Estudiante::registrarAsistencia(string fecha, string materia, string estado) {
    Asistencia asistencia(fecha, materia, estado);
    asistencias.push_back(asistencia);
}

void Estudiante::mostrarAsistencias() const {
    cout << "Asistencias materias previas inscritas del estudiante: " << endl;
    for (const auto& asistencia : asistencias) {
        cout << "Fecha: " << asistencia.getFecha() << ", Materia: " << asistencia.getMateria()
             << ", Estado: " << asistencia.getEstado() << endl;
    }
}


void Estudiante::mostrarEstudianteinicio() const {
    cout << "Estudiante: " << nombre << endl << "Edad: " << edad << endl <<"Promedio: " << promedio << endl << "Materias inscritas: " << endl ;
    for (int i = 0; i < materias.size(); i++) {
        cout << i+1 <<") " << materias[i] << endl;
    }
}

void Estudiante::materiasEstudiante(Estudiante& estudiane) const {
    string r="Y",materia;
    vector<string>materias=estudiane.getMaterias();
    int i=0,n_materia=0;


    cout << "Ingrese las nuevas materias : " << endl;
    cin >> materia;
    materias.push_back(materia);
    cin >> materia;
    materias.push_back(materia);


    do {
        cin >> materia;
        materias.push_back(materia);
        cout<< "Desea ingresar mas materias (Y/N): ";
        cin >> r;
    }while( r=="Y"||r=="y");

    cout <<"Desea eliminar alguna materia? (Y/N): " ;
    cin >> r;
    if (r=="Y"||r=="y") {
        do {
            for(i=0; i<materias.size(); i++) {
                cout << i+1 <<") " << materias[i] << endl;
            }

            cout << "Elija el numero de la materia que desea eliminar: " << endl;
            cin >> n_materia;
            materias.erase(materias.begin() + n_materia-1);
            cout << "Desea eliminar otra materia? (Y/N): ";
            cin >> r;
        }while(r=="Y"||r=="y");
    }
    estudiane.setMaterias(materias);
}

void Estudiante::mostrarEstudiantefinal() const {
    cout << "Perfil del estudiante" << endl;
    cout << "Estudiante: " << nombre << endl << "Edad: " << edad << endl << "Promedio: " << promedio << endl << "Materias inscritas: " << endl;
    for (int i = 0; i < materias.size(); i++) {
        cout << i + 1 << ") " << materias[i] << endl;
    }
    mostrarAsistencias();  // Mostrar las asistencias también.
}