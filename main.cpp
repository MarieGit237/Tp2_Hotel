#include "hotel.h"
#include "chambre.h"
#include <iostream>

Hotel creerhotel() {
    Hotel hotel("OCEAN11", "le belgio", "las vegas");
    
  //6-a)
  for(int i=1; i<=3; i++){
    hotel.ajou_supp_chambre(Chambre(i, "single", 100.0));
    }
    
    for(int i=4; i<=8; i++){
    hotel.ajou_supp_chambre(Chambre(i, "double", 125.0));
    }
    
    for(int i=9; i<=10; i++){
    hotel.ajou_supp_chambre(Chambre(i, "suite", 210.0));
    }
    
    //6-b) affichage Chambre
    std::ostream& operator<<(std::ostrem& os, const Chambre& chambre){
        os << "Numero: "<< chambre.getNumero()<< std::endl;
           << "Type: " << chambre.getType() << std::endl;
           << "Prix: " << chambre.getPrix() << std::endl;
    
    //6-b) affichage Hotel
    
