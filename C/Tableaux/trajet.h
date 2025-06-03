#ifndef TRAJET_H
#define TRAJET_H

#include "pointcar.h"

#define MAX_TRAJETS 100

typedef struct {
    int id;
    PointCar depart;
    PointCar arrivee;
} Trajet;

void ajouterTrajet(Trajet trajets[], int* nbTrajets, int id, PointCar depart, PointCar arrivee, float distance);
void afficherTrajets(Trajet trajets[], int nbTrajets);

#endif