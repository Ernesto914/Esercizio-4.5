#include <stdio.h>

int main(void)
{
    int prodottiacquistati, i=0;
    float costo, totale=0;

    printf("Inserisci il numero di prodotti acquistati: ");
    scanf("%d", &prodottiacquistati);

    while (i < prodottiacquistati)
    {
        printf("Inserisci il costo del prodotto %d: ", i);
        scanf("%f", &costo);
        totale += costo;
        i++;
    }

    printf("In totale hai speso %.2f euro\n", totale);

    return 0;
}
