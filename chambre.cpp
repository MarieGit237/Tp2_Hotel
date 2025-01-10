#include "chambre.h"

Chambre::Chambre(int numero, std::string type, int prix):_numero(numero), _type(type), _prix(prix){
}

int Chambre::getNumero() const{
  return _numero;
}

std::string Chambre::getType() const{
  return _type;
}

int Chambre::getPrix() const{
  return _prix;
}

void Chambre::setPrix(int prix){
   _prix=prix;
}
