#ifndef TAXI_H
#define TAXI_H

#define MAX_TAXIS 100

typedef struct {
    int id;
    char chauffeur[50];
    char matricule[15];
    int capacite;
    int places_restantes;
} Taxi;

void ajouterTaxi(Taxi taxis[], int* nbTaxis, int id, const char* chauffeur, const char* matricule, int capacite);
void afficherTaxis(Taxi taxis[], int nbTaxis);

#endif 