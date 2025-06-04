#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "client.h"

Client* ajouterClient(Client* tete, int id, const char* nom, const char* telephone) {
    Client* nouveau = malloc(sizeof(Client));
    nouveau->id = id;
    strcpy(nouveau->nom, nom);
    strcpy(nouveau->telephone, telephone);
    nouveau->suivant = tete;
    return nouveau;
}

void ajouterClient(Client* tete) {
    Client* courant = tete;
    while (courant) {
        printf("Client %d : %s - %s\n", courant->id, courant->nom, courant->telephone);
        courant = courant->suivant;
    }
}

void libererClients(Client* tete) {
    Client* courant = tete;
    while (courant) {
        Client* tmp = courant;
        courant = courant->suivant;
        free(courant);
    }
}