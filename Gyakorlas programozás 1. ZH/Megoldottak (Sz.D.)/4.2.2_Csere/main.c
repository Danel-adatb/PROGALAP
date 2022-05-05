#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    int tomb1[N];
    int tomb2[N];
    int i;

        srand(time(NULL));

//random beolvasas

    for (i=0;i<N;i++) {
        tomb1[i]= rand()%100+1;
        tomb2[i]= rand()%100+1;
    }

    int tmp;

//Kiiratas

printf("\n");
    printf("az 1. tomb elemei: \n");
        for (i=0;i<N;i++) {
            printf("%d\n",tomb1[i]);
        }

printf("\n");
    printf("az 2. tomb elemei: \n");
        for (i=0;i<N;i++) {
            printf("%d\n",tomb2[i]);
        }

//Csere

    for (i=0;i<N;i++) {
       tmp = tomb1[i];
       tomb1[i] = tomb2[i];
       tomb2[i] = tmp;
    }

//Felcserelt tomb kiiaratas
printf("\n");
printf("Felcserelt tombok: \n");

    printf("\naz 1. tomb elemei: \n");
        for (i=0;i<N;i++) {
            printf("%d\n",tomb1[i]);
        }

printf("\n");
    printf("az 2. tomb elemei: \n");
        for (i=0;i<N;i++) {
            printf("%d\n",tomb2[i]);
        }
    return 0;
}
