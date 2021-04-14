#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <iostream>
#include <string>

    Monstre::Monstre(): _nom("Gobelin"), _pv(20), _atk(7), _dispo(true){

    } 

    Monstre::Monstre(std::string nom, int pv, int atk, bool dispo): _nom(nom), _pv(pv), _atk(atk), _dispo(dispo){

    } //deuxième ligne comme vu en cours

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

    //pointeur là-aussi pour attaquer le monstre ennemi
    void Monstre::attaque(Monstre * monstreEnnemi){
        //Pour attaquer il faut que le monstre soit "dispo"
        if (_dispo = true){

        }
    }

    bool Monstre::mortMonstre(){
        if(_pv <= 0)
        {
            _pv =0;
            _dispo = false;
            return true;
        }
    }

#endif