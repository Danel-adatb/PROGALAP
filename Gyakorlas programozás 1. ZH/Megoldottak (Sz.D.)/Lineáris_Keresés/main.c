#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int i, tomb[N];

    for (i=0;i<N;i++) {
        printf("%d. Elem\n",i+1);
        scanf("%d",&tomb[i]);
    }

    //Lineáris keresés:
    i=0;
    while (i<N && tomb[i] != 5) {
        i++;
    }

    if (i<N) {
        printf("Van ilyen elem, az %d. elem az.\n",i+1);
    } else {
        printf("Nincs benne ilyen elem dilo.");
    }

    //Ha biztos tudjuk, hogy lesz benne ilyen elem:
    //Kiválasztás tétele:

    /*while (tomb[i] != 5) {
        i++;
    }

    printf("Az index, amelyet keres: %d\n",i+1);*/
    return 0;
}
