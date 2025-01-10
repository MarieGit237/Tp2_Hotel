#include "hotel.h"

Hotel::Hotel(std::string identifiant_unique, std::string nom, std::string ville):_identifiant_unique(identifiant_unique), _nom(nom), _ville(ville){
}

  std::string Hotel::getIdentifiantUnique(){
    return _identifiant_unique;
  }
  
  std::string Hotel::getNom(){
    return _nom;
  }
  
  std::string Hotel::getVille(){
    return _ville;
  }
  
  std::vector<Chambre> Hotel::getChambre(){
    return _chambre;
  }
  
  void Hotel::ajou_supp_chambre(Chambre chambre){
    _chambre.push_back(chambre);
  }
