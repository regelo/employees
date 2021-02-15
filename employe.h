#ifndef __EMPLOYE_H__
#define __EMPLOYE_H__

#include <string>

class Employe {
    private:
        std::string nom;
    public:
        Employe(std::string le_nom);

        std::string getNom();
};

#endif