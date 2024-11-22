#ifndef EXCEPCIONES_H
#define EXCEPCIONES_H

#include <exception>
#include <string>

// Excepción personalizada para formato de fecha incorrecto
class FechaInvalidaException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Formato de fecha incorrecto.";
    }
};

// Excepción personalizada para materia no registrada
class MateriaNoRegistradaException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Materia no registrada.";
    }
};

#endif // EXCEPCIONES_H
