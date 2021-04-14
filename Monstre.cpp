#include "Monstre.h"
#include <iostream>
#include <string>

Monstre::Monstre(): _nom("Gobelin"), _pv(20), _atk(7), _dispo(true){

}

Monstre::Monstre(std::string nom, int pv, int atk, bool dispo): _nom(nom), _pv(pv), _atk(atk), _dispo(dispo){

}

std::string Monstre::getNom(){
    return _nom;
}

int Monstre::getPv(){
    return _pv;
}

int Monstre::getAtk(){
    return _atk;
}

bool Monstre::getDispo(){
    return _dispo;
}



#endif