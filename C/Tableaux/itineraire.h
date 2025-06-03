#ifndef ITINERAIRE_H
#define ITINERAIRE_H

#include "trajet.h"

#define MAX_ITINERAIRES 10
#define MAX_PARCOURS 10

typedef struct {
    int id;
    Trajet trajets[MAX_PARCOURS];
    int nbTrajets;
} Itineraire;

void ajouterItineraire(Itineraire itineraires[], int* nbItineraires, Itineraire i);
void afficherItineraires(Itineraire itineraires[], int nbItineraires);

#endif