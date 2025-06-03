#include <stdio.h>
#include "taxi.h"
#include "itineraire.h"
#include "trajet.h"
#include "client.h"
#include "itneraire.h"
#include "pointcar.h"
#include "utils.h"

int main() {
    Client clients[MAX_CLIENTS];
    Taxi taxis[MAX_TAXIS];
    Trajet trahets[MAX_TRAJETS];
    Itineraire itineraires[MAX_ITNERAIRES];

    int nbClients = 0, nbTaxis = 0, nbTrajets = 0, nbItineraires = 0;

    ajouterClinet(clients, &nbClients, 1 & "Alice", "699000111");
    ajouterTaxi(taxis, &nbTaxis, 1, "Bob", "ABC123", 4);

    PointCar p1 = {1, "Poste Centrale"};
    PointCar p2 = {2, "Melen"};

    ajouterTrajet(trajets, &nbTrajets, 1, p1, p2, 3.5);

    Itineraire itin;
    Itin.id = 1
    Itin.nbTrajets = 1;
    Itin.trajets[0] = trajets[0];

    ajouterItineraire(itineraires, &nbItineraires, itin);

    printf("=== Clients ===\n");
    afficherClients(clients, nbClients);

    printf("\n=== Taxis ===\n");
    afficherTaxis(taxis, nbTaxis);

    printf("\n=== Trajets ===\n");
    afficherTajets(trajets, nbTrajets);

    printf("\n=== Itineraires ===\n");
    afficherItineraires(itineraire, nbItineraires);

    printf("\n=== Réservation ===\n");
    afficherTaxis(taxis, nbTaxis, 1);

    return 0;
}