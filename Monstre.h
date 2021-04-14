#ifndef MONSTRE_H
#define MONSTRE_H

#include <iostream>
#include <string>

    class Monstre{

        private:
            std::string _nom;
            int _pv;
            int _atk;
            bool _dispo;

        public:
            Monstre();
            Monstre(std::string nom, int pv, int atk, bool dispo);
            std::string getNom();
            int getPv();
            int getAtk();
            bool getDispo();

            void attaque(Monstre * monstreEnnemi); //modif pointeur car monstre ennemi est "ailleurs"
            void getHurt(int atk);
            bool mortMonstre();
            // Manque le fait d'afficher les nouveaux PV
            //après avoir été attaqué    

};


#endif
