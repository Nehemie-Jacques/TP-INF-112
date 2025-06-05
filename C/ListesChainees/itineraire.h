#ifndef ITINERAIRE_H
#define ITINERAIRE_H

#include "trajet.h"

typedef struct itineraire {
    int id;
    Trajet* trajets;
    struct Itineraire* suivant;
} Itineraire;

Itineraire* ajouterItineraire(Itineraire* tete, int id, Trajet* trajets);
void afficherItineraire(Itineraire* tete);
void libererItineraire(Itineraire* tete);

#endif