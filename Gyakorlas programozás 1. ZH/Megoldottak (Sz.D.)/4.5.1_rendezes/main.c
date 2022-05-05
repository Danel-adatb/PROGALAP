#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int tomb[N], i;
    srand(time(NULL));

//Feltoltes - Kiiratas

    for (i=0;i<N;i++) {
        tomb[i] =rand()%10+1;
        printf("%d\n",tomb[i]);
    }

//Legkisebb eleme a tombnek

    int minimum=0;

    for (i=1;i<N;i++) {
        if (tomb[i] < tomb[minimum]) {
            minimum=i;
        }
    }

    printf("\nA tomb legkisebb eleme: %d\nindex: %d.\n",tomb[minimum],minimum);

    int darab=0;

    for (i=0;i<N;i++) {
        if (tomb[i]==tomb[minimum]) {
            darab++;
        }
    }

   printf("Darabszam: %d\n",darab);
    return 0;
}
