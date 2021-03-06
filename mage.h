#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>
#include "Monstre.h"
#include <vector>

    class Mage{

        private:
        std::string _nom;
        int _pv;
        std::vector<zoneJeu>;

        public:
        Mage();
        Mage(std::string nom, int pv, bool mort);
        std::string getNom();
        int getPv();
        void afficherMage();
        void invocation();
        void attaquer();
        void getHurt();
        void getCible();
        bool mortMage();
    
    };
#endif