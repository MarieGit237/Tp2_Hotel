#include "client.h"

int main(){

Client client("dginhac", "Ginhac", "Dominique");
std::string nom_client =client.getNom();
std::cout<<"le nom du client est: "<< nom_client << std::endl;

return 0;
}
