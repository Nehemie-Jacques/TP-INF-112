# ifndef CLIENT_H
# define CLIENT_H

typedef struct {
    int id;
    char nom[50];
    char telephone[15]
    struct client* suivant;
} client;

Client* ajouterClient(Client* tete, int id, const char* nom, const char* telephone);
void afficherClients(Client* tete);
void libererClients(Client* tete);

# endif