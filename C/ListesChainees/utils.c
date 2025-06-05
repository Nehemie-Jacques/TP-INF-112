#include <stdio.h>
#include "utils.h"

void prendreTaxi(Taxi* listes, int idTaxi) {
    Taxi* taxi = trouverTaxi(listes, idTaxi);
    if (taxi && taxi->places_restantes > 0) {
        taxi->places_restantes--;
        printf("Taxi %d réservé. Places restantes : %d\n", idTaxi, taxi->places_restantes);
    } else {
        printf("Taxi non disponible.\n");
    }
}