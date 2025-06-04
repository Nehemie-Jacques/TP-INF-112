#ifndef TAXI_H
#define TAXI_H

typedef struct {
    int id;
    char chauffeur[50];
    char matricule[15];
    int capacite;
    int places_restantes;
    struct Taxi *suivant;
} Taxi;

Taxi* ajouterTaxi(Taxi* tete, int id, const char* chauffeur, const char* matricule, int capacite);
void afficherTaxis(Taxi* tete);
Taxi* trouverTaxi(Taxi* tete, int id);
void libererTaxis(Taxi* tete);

#endif