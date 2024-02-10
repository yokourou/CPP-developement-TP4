#include "usine.hpp" 


std::unique_ptr<Carte> UsineCarte::getCarte(){


    
    if (compteur >= nb){
        return nullptr;
    } 
    else{
        
        
        // Creer une carte-----------------------------
        std::unique_ptr<Carte> c(new Carte(compteur)); 
        // incrementer le compteur --------------------
        compteur +=1;
        return c;

    } 
} 

UsineCarte::UsineCarte(int n): nb(n){

} 

UsineCarte::UsineCarte(){
    
} 