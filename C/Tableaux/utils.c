#include <stdio.h>
#include <string.h>
#include "utils.h"

void prendreTaxi(Taxi taxis[], int nbTaxis, int idTaxi) {
    for (int i = 0; i < nbTaxis; i++) {
        if (taxis[i].id == idTaxi && taxis[i].places_restantes > 0) {
            taxis[i].places_restantes--;
            printf("Taxi %d réservé. Places restantes : %d\n", idTaxi, taxis[i].places_restantes);
            return;
        }
    }
    printf("Taxi non disponible.\n");
}

Trajet trouverPlusCourtTrajet(Trajet trajets[], int nbTrajets, const char* depart, const char* arrivee) {
    float min = 99999;
    trajet court;

    for(int i = 0; i < nbTrajets; i++) {
        if (strcmp(trajets[i].depart.nom, depart) == 0 && 
            strcmp(trajets[i].arrivee.nom, arrivee) == 0 && 
            trajets[i].distance < min) {
                min = trajets[i].distance;
                court = trajets[i];
        }
    }

    return court;
}