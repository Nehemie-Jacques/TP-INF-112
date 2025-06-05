#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trajet.h"

Trajet* ajouterTrajet(Trajet* tete, int id, PointCar depart, PointCar arrivee, float distance) {
    Trajet* nouveau = malloc(sizeof(Trajet));
    nouveau->id = id;
    nouveau->depart = depart;
    nouveau->arrivee = arrivee;
    nouveau->distance = distance;
    nouveau->suivant = tete;
    return nouveau;
}

void afficherTrajets(Trajet* tete) {
    while (tete) {
        printf("Trajet %d : %s -> %s (%.2f km)\n",
               tete->id, tete->depart.nom, tete->arrivee.nom, tete->distance);
        tete = tete->suivant;
    }
}

Trajet* trouverPlusCourtTrajet(Trajet* tete, const char* depart, const char* arrivee) {
    Trajet* min = NULL;
    while (tete) {
        if (strcmp(tete->depart.nom, depart) == 0 &&
            strcmp(tete->arrivee.nom, arrivee) == 0) {
            if (min == NULL || tete->distance < min->distance) {
                min = tete;
            }
        }
        tete = tete->suivant;
    }
    return min;
}

void libererTrajets(Trajet* tete) {
    while (tete) {
        Trajet* tmp = tete;
        tete = tete->suivant;
        free(tmp);
    }
}