#include "operateur.h"

Operateur::Operateur(std::string nom, QuartDeTravail un_quart) 
        : Employe(nom) {
    this->le_quart = un_quart;
}

void Operateur::afficher() {
    std::string quart = "Invalide";
    switch(this->le_quart) {
        case JOUR:
            quart = "jour";
            break;
        case SOIR:
            quart = "soir";
            break;
        case NUIT:
            quart = "nuit";
            break;
    };

    std::cout << this->getNom() << " : " << quart << std::endl;
}