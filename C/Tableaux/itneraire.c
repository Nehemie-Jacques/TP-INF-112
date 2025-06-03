#include <stdio.h>
#include "itneraire.h"

void ajouterItineraire(Itineraire itineraires[], int* nbItineraires, Itineraire i) {
    if (*nbItineraires < MAX_ITINERAIRES) {
        itineraires[*nbItineraires] = i;
        (*nbItineraires)++;    
    }
}

void afficherItineraires(Itineraire itineraires[], int nbItineraires) {
    for (int i = 0; i < nbItineraires; i++) {
        printf("Itineraire %d : \n", itineraires[i].id);
        for (int j = 0; j < itineraires[i].nbTrajets; j++) {
            printf("Trajet %s -> %s | Distance : %.2f km\n",
                   itineraires[i].trajets[j].depart.nom,
                   itineraires[i].trajets[j].arrivee.nom,
                   itineraires[i].trajets[j].distance);
        }
    }
}