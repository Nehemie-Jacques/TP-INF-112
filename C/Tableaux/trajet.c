#include <stdio.h>
#include "trajet.h"

void ajouterTrajet(Trajet trajets[], int* nbTrajets, int id, PointCar depart, PointCar arrivee, float distance) {
    trajets[*nbTrajets].id = id;
    trajets[*nbTrajets].depart = depart;
    trajets[*nbTrajets].arrivee = arrivee;
    trajets[*nbTrajets].distance = distance;
    (*nbTrajets)++;
}

void afficherTrajets(Trajet trajets[], int nbTrajets) {
    for (int i = 0; i < nbTrajets; i++) {
        printf("Trajet %d : %s -> %s | Distance : %.2f km\n",
               trajets[i].id,
               trajets[i].depart.nom,
               trajets[i].arrivee.nom,
               trajets[i].distance);
    }
}