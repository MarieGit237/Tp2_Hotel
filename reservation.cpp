#include "reservation.h"

Reservation::Reservation(Date date_debut, int nombre_nuits, int prix_nuit, std::string identifiant_hotel, std::string identifiant_chambre, std::string identifiant_client): _date_debut(date_debut), _nombre_nuits(nombre_nuits), _prix_nuit(prix_nuit), _identifiant_hotel(identifiant_hotel), _identifiant_chambre(identifiant_chambre), _identifiant_client(identifiant_client), _montant_total(montant_total){}


    Date Reservation::getDateDebut(){
      return _date_debut;
      }

    int Reservation::getNombreNuits(){
      return _nombre_nuits;
      }
      
    int Reservation::getPrixNuit(){
      return _prix_nuit;
      }
      
    std::string Reservation::getIdentifiantHotel(){
      return _identifiant_hotel;
      }
      
    std::string Reservation::getIdentifiantChambre(){
      return _identifiant_chambre;
      }
      
    std::string Reservation::getIdentifiantClient(){
        return _identifiant_client;
        }

    int Reservation::getMontantTotal(){
      return _montant_total;
      }
    
    void Reservation::modification(Date date, int nombre_nuits){
        _nombre_nuits=nombre_nuits;
        Date _date=date;
      }
      
     int Reservation::calculMontantReservation(int nombre_nuits, int prix_nuit){
          return _montant_total= nombre_nuits * prix_nuit;
      }
