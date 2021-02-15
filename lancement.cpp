#include <iostream>

#include "employe.h"
#include "contractuel.h"
#include "operateur.h"

int main() {
   std::cout << "Test" << std::endl;

   Employe alice("Alice");

    std::cout << alice.getNom() << std::endl;

    Contractuel bob("Bob", 20210101);
    bob.afficher();

    Operateur eve("Eve", JOUR);
    eve.afficher();
}