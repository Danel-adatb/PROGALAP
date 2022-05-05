#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int tomb1[N], tomb2[N], i, j;
    srand(time(NULL));

    printf("\nAz 1. tomb elemei: \n");
    for (i=0;i<N;i++) {
        tomb1[i] = rand()%10+1;
        printf("%d\n",tomb1[i]);
    }

    printf("\nAz 2. tomb elemei: \n");
    for (j=0;j<N;j++) {
        tomb2[j] = rand()%10+1;
        printf("%d\n",tomb2[j]);
    }

    printf("\nAz 1. tombben benne de a 2.-ban nincs: \n");
    for (i=0;i<N;i++) {
        j=0;
        while (j<N && tomb2[j] != tomb1[i]) {
            j++;
        }

        if (j==N) printf("%d ",tomb1[i]);
    }

    printf("\nMajd forditva: \n");
    for (j=0;j<N;j++) {
        i=0;
        while (i<N && tomb2[j] != tomb1[i]) {
            i++;
        }

        if (i==N) printf("%d ",tomb2[j]);
    }
    printf("\n");
    return 0;
}
