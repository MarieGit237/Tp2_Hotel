#include <iostream>
#include "date.h"
#include <string>

class Reservation 
{
  private: 
    Date _date_debut;
    int _nombre_nuits;
    int _prix_nuit;
    std::string _identifiant_hotel;
    std::string _identifiant_chambre;
    std::string _identifiant_client;
    int _montant_total;
    
  public:
    Reservation(Date date_debut, int nombre_nuits, int prix_nuit, std::string identifiant_hotel, std::string identifiant_chambre, std::string identifiant_client,int montant_total);
    Date getDateDebut();
    int getNombreNuits();
    int getPrixNuit();
    std::string getIdentifiantHotel();
    std::string getIdentifiantChambre();
    std::string getIdentifiantClient();
    void modification(Date date, int montant_total);
    int calculMontantReservation(int nombre_nuits, int prix_nuit);
    int getMontantTotal();
};
