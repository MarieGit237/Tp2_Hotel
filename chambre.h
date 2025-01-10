#include <iostream>


class Chambre{
  private:
    int _numero;
    std::string _type;
    int _prix;
    
  public:
    Chambre(int numero, std::string type, int prix);
    int getNumero();
    std::string getType();
    int getPrix();
    void setPrix(int numero);
};
