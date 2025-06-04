#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "taxi.h"

Taxi* ajouterTaxi(Taxi* tete, int id, const char* chauffeur, const char* matricule, int capacite) {
    Taxi* nouveau = malloc(sizeof(Taxi));
    nouveau->id = id;
    strcpy(nouveau->chauffeur, chauffeur);
    strcpy(nouveau->matricule, matricule);
    nouveau->capacite = capacite;
    nouveau->places_restantes = capacite;
    nouveau->suivant = tete;
    return nouveau;
}

void afficherTaxis(Taxi* tete) {
    Taxi* courant = tete;
    while (courant) {
        printf("Taxi %d : %s - %s | Capacité : %d | Restances : %d\n",
               courant->id,
               courant->chauffeur,
               courant->matricule,
               courant->capacite,
               courant->places_restantes);
        courant = courant->suivant;
    }
}

Taxi* trouverTaxi(Taxi* tete, int id) {
    while (tete) {
        if (tete->id == id) return tete;
        tete = tete->suivant;
    }
    return NULL;
}

void libererTaxis(Taxi* tete) {
    while (tete) {
        Taxi* tmp = tete;
        tete = tete->suivant;
        free(tete);
    }
}