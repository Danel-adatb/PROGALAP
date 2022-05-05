#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int tomb0[N], tomb1[N], i;
    srand(time(NULL));
//Bekerese az adatoknak a tombbe

    printf("1. tomb elemei: \n");

    for (i=0;i<N;i++) {
        tomb0[i] = rand()%10+1;
        printf("%d\n",tomb0[i]);
    }

    printf("\n2. tomb elemei: \n");

    for (i=0;i<N;i++) {
        tomb1[i] = rand()%10+1;
        printf("%d\n",tomb1[i]);
    }
//Metszet kiszamitasa

    printf("\nA metszet (minden szam egyszer): \n");

    int j, k;

    for (i=0;i<N;i++) {
        k=0;
        while (k<i && tomb0[k] != tomb1[i]) {
            k++;
        }

        if (k==i) {
            j=0;
            while (j<N && tomb1[j] != tomb0[i]) {
                j++;
            }

            if (j<N) {
                printf("%d ",tomb1[j]);
            }
        }
    }
    return 0;
}
