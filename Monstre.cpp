#include "Monstre.h"
#include <iostream>
#include <string>

Monstre::Monstre(): _nom("Gobelin"), _pv(20), _atk(7){

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
