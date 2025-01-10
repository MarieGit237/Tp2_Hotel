#include <iostream>
#include <string>

class Client {
  private: 
    std::string _identifiant;
    std::string _nom;
    std::string _prenom;
  public:
    Client(std::string identifiant, std::string nom, std::string prenom);  
    std::string getIdentifiant();
    std::string getNom();
    std::string getPrenom();  
};

