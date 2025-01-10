#include "client.h"

Client::Client(std::string identifiant, std::string nom, std::string prenom):_identifiant(identifiant),_nom(nom),_prenom(prenom){
}

  std::string Client::getIdentifiant() {
    return _identifiant;
  }

  std::string Client::getNom() {
    return _nom;
  }

  std::string Client::getPrenom() {
    return _prenom;
  }
