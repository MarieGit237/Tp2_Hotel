#include <iostream>
#include <string>

class Chambre{
private: 
int _numero;
std::string _type;
int _prix;

public:
Hotel(int numero, std::string type, int prix);
int getNumero();
std::string getType();
int getPrix();

}
