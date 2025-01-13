#include "reservation.h"

int main(){

Date date(12,25);
Reservation reservation1(date, 10, 190, "ocean11", "chambre2112", "dginhac");
int night=reservation1.getNombreNuits();
int price=reservation1.getPrixNuit();
int sum=reservation1.getMontantTotal();
std::cout<<"le nombre de nuits  s'eleve à: "<< night << std::endl;
std::cout<<"le prix d'une nuit  s'eleve à: "<< price << std::endl;
std::cout<<"le montant total de la reservation s'eleve à: "<< sum << std::endl;

return 0;
}
