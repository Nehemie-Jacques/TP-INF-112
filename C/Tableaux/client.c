#include <stdlio.h>
#include <string.h>
#include "client.h"

void ajouterClient(Client clients[], int* nbClients, int id, const char* nom, const char* telephone) { // Ajoute un client au tableau
    clients[*nbClients].id = id; 
    strcpy(clients[*nbClients].nom, nom); // Copie la chaîne de caractères nom dans le champ nom du client
    strcpy(clients[*nbClients].telephone, telephone); // Copie la chaîne de caractères telephone dans le champ telephone du client
    (*nbClients)++; // Incrémente le nombre de clients
}

void afficherClients(Client clients[], int nbClients) {
    for (int i = 0; i < nbClients; i++) {
        printf("Client %d : %s - %s\n", clients[i].id, clients[i].nom, clients[i].telephone);
    }
}