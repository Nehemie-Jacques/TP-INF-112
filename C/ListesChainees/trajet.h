#ifndef TRAJET_H
#define TRAJET_H

#include "pointcar.h"

typedef struct trajet {
    int id;
    PointCar depart;
    PointCar arrivee;
    float distance;
    struct trajet* suivant;
} Trajet;

Trajet* ajouterTrajet(Trajet* tete, int id, PointCar depart, PointCar arrivee, float distance);
void afficherTrajets(Trajet* tete);
Trajet* trouverTrajet(Trajet* tete, const char* depart, const char* arrivee);
void libererTrajets(Trajet* tete);

#endif