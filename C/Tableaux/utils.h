#ifndef UTILS_H
#define UTILS_H

#include "taxi.h"
#include "itineraire.h"

void prendreTaxi(Taxi taxis[], int nbTaxis, int idTaxi);
Trajet trouverPlusCourtTrajet(Trajet trajets[], int nbTrajets, const char* depart, const char* arrivee);

#endif