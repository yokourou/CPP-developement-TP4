// GARDIENS
#ifndef _USINE_CARTE_HPP_
#define _USINE_CARTE_HPP_
#include <memory>
#include <iostream>
#include <sstream> 
#include "carte.hpp"




class Carte;

class UsineCarte{

    int compteur = 0;
    int nb = 52;
    public :
        UsineCarte();
        UsineCarte(int );
        UsineCarte(const UsineCarte & x) = delete;
        UsineCarte & operator=(const UsineCarte & x) = delete;
        std::unique_ptr<Carte> getCarte();
} ;

#endif
