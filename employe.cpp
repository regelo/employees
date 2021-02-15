#include "employe.h"

Employe::Employe(std::string le_nom) {
    this->nom = le_nom;
}

std::string Employe::getNom() {
    return this->nom;
}