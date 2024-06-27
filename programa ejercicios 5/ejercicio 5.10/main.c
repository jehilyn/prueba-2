#include <stdio.h>

/* Busqueda secuencial en arreglos ordenados en forma creciente. */

const int MAX = 100;

void lectura(int, int);        /* Prototipos de funciones. */
int Busca(int *, int, int);

void main(void)
{
int RES, ELE, TAM, VEC[MAX];
do
{
    printf("Ingrese el tama�o del arreglo: ");
    scanf("%d", &TAM);
}
while (TAM > MAX || TAM < 1);
/* Se verifica que el tama�o del arreglo sea correcto. */
lectura(VEC, TAM);
printf("\nIngrese el elemento a buscar:");
scanf("%d", &ELE);
RES = Busca(VEC, TAM, ELE);          /* Se llama a la funcion que busca en el
                                      arreglo. */

if (RES)
/* Si RES tiene un valor verdadero -diferente de 0-, se escribe la
posicion en la que se encontro al elemento. */
printf("\nEl programa se encuentra en la posicion: %d", RES);
else
    printf("\nEl elelemento no se encuentra en el arreglo");
}

void Lectura(int A[], int T)
/* La funcion lectura se utiliza para leer un arreglo unidimensional de T
elementos de tipo entero. */
{
    printf("Ingrese el elemento %d: ", I+1);
    scanf("%d", &A[I]);
    }
    }
    int Busca(int A[], int T, int E)
    /* Esta funcion se utiliza para localizar el elemento E en el arreglo
    unidimensional A.
    Si se encuentra, la funcion regresa la posicion correspondiente. En caso
    contrario regresa 0. */
    {
    int RES, I = 0, BAN = 0;
    while ((I < T)&& (E >= A[I]) && !BAN)
    /* Observa que se incorpora una nueva condicion. */
    if (A[I] == E)
           BAN++;
    else
        I++;
if (BAN)
    RES = I + 1;
    /* Se asigna I+1 dado que las posiciones en el arreglo comienzan desde
    cero. */
else
    RES = BAN;
return (RES),
}

