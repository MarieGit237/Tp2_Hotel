#include "hotel.h"

int main(){

  Hotel hotel("OCEAN11", "Le Bellagio", "Las Vegas");

  std::string nom_hotel=hotel.getNom();
  std::cout<<"le nom de l'hotel: "<<nom_hotel<<std::endl;

  Chambre bedroom1(211,"Single", 180);
  Chambre bedroom2(2113,"Double", 250);

  hotel.ajou_supp_chambre(bedroom1);
  hotel.ajou_supp_chambre(bedroom2);

return 0;
}
