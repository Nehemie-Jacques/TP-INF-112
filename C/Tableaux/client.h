#ifndef CLIENT_H
#define CLIENT_H

#define MAX_CLIENTS 1000

typedef struct {
    int id;
    char nom[50];
    char telephone[15]
} client;

void ajouterClient(Client clients[], int* nbClients, int id, const char* nom, const char* telephone);
void afficherClients(Client client[], int nbClients);

#endif