#ifndef __CONTRACTUEL_H__
#define __CONTRACTUEL_H__

#include <iostream>

#include "employe.h"

class Contractuel : public Employe {
    private:
        long date_fin;
    public:
        Contractuel(std::string nom, long date_fin);

        void afficher();
};

#endif