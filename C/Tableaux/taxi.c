#include <stdio.h>
#include <string.h>
#include "taxi.h"

void ajouterTAxi(Taxi taxis[], int* nbTaxis, int id, const char* chauffeur, const char* matricule, int capacite) {
    taxis[*nbTaxis].id = id;
    strcpy(taxis[*nbTaxis].chauffeur, chauffeur);
    strcpy(taxis[*nbTaxis].matricule, matricule);
    taxis[*nbTaxis].capacite = capacite;
    taxis[*nbTaxis].places_restantes = capacite;
    (*nbTaxis)++;   
}

void afficherTaxis(Taxi taxis[], int nbTaxis) {
    for (int i = 0; i < nbTaxis; i++) {
        printf("Taxi %d : %s - %s | Capacité : %d | Restances : %d\dn",
               taxis[i].id,
               taxis[i].chauffeur,
               taxis[i].matricule,
               taxis[i].capacite,
               taxis[i].places_restantes);
    }
}