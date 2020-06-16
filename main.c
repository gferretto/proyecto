#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// tdas
#include "list.h"

// estructuras
typedef struct tipoAtributos{
    int salud_poblacion;
    int desarrollo_cura;
    int popularidad;
    int economia_pais;
    int seguridad_pais;
    int honestidad;
    int familia;
} tipoAtributos;

typedef struct tipoPartida{
    int current;
    int checkpoint;
    atributos * atributos;
} tipoPartida;

typedef struct tipoHistoria{
    int idpregunta;
    char * narrativa1;
    char * narrativa2;
    char * narrativa3;
} tipoHistoria;

typedef struct tipoPregunta{
    int id;
    historia * historia;
    list * alternativas;
    int checkpoint;
    int retorno;
} tipoPregunta;

typedef struct tipoRespuesta{
    int idpregunta;
    char * respuesta;
    atributos * atributos;
} tipoRespuesta;

// funciones

tipoPartida * crearPartida() {
    tipoPartida * new = (tipoPartida *)malloc(sizeof(tipoPartida));
    new->current = 0;
    new->checkpoint = 0;
    new->atributos = (tipoAtributos *)malloc(sizeof(tipoAtributos));
    return new;
}

int cargarPreguntas()
{
    return 1;
}

int main()
{
    tipoPartida * partida = crearPartida();

    cargarPreguntas();

    return 0;
}
