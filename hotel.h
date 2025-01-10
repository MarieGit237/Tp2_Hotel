#include <iostream>
#include "chambre.h"
#include <string>
#include <vector>

class Hotel {
  private:
    std::string _identifiant_unique;
    std::string _nom;
    std::string _ville;
    std::vector <Chambre> _chambre;
  public:
    Hotel(std::string identifiant_unique, std::string nom, std::string ville);
    std::string getIdentifiantUnique();
    std::string getNom();
    std::string getVille();
    std::vector <Chambre> getChambre();
    void ajou_supp_chambre(Chambre chambre);
};
