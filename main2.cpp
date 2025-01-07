#include "chambre.h"

int main(){

   Chambre bedroom(2112,"Single",180);
   int num=bedroom.getNumero();
   std::cout<<"my bedroom numbers is: " << num << std::endl;

   return 0;

}

