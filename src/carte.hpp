// GARDIENS
#ifndef _CARTE_HPP_
#define _CARTE_HPP_
#include "usine.hpp" 
#include <iostream>


class UsineCarte;

class Carte{

    friend class UsineCarte;

    private:
        int valeur; 
        Carte(int v);
        Carte(const Carte &c) = delete;
        Carte & operator=(const Carte & x) = delete;

    public:
        unsigned getValeur(); 

};


#endif


