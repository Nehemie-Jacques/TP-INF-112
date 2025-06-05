#include <stdio.h>
#include <stdlib.h>
#include "itineraire.h"

Itineraire* ajouterItineraire(Itineraire* tete, int id, Trajet* trajets) {
    Itineraire* nouveau = malloc(sizeof(Itineraire));
    nouveau->id = id;
    nouveau->trajets = trajets;
    nouveau->suivant = tete;
    return nouveau;
}

void afficherItineraires(Itineraire* tete) {
    while (tete) {
        Itineraire* tmp = tete;
        libererTrajets(tete->trajets);
        tete = tete->suivant;
        free(tmp);
    }
}