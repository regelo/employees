#ifndef __OPERATEUR_H__
#define __OPERATEUR_H__

#include <iostream>

#include "employe.h"

enum QuartDeTravail {
    JOUR,
    SOIR,
    NUIT
};

class Operateur : public Employe {
    private:
        QuartDeTravail le_quart;
    public:
        Operateur(std::string nom, QuartDeTravail un_quart);

        void afficher();
};

#endif