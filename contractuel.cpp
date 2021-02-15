#include "contractuel.h"

Contractuel::Contractuel(std::string nom, long date_fin)
        : Employe(nom) {
    this->date_fin = date_fin;
}

void Contractuel::afficher() {
    std::cout << "Nom : " << this->getNom() << std::endl;
    std::cout << "Date de fin : " << this->date_fin << std::endl;
}