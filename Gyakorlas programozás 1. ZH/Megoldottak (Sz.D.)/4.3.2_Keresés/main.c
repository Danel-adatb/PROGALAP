#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int tomb[N], i;
    srand(time(NULL));

    for (i=0;i<N;i++) {
        tomb[i] = rand()%100+1;
        printf("%d\n",tomb[i]);
    }

    int szam;

    printf("\nAdjon meg egy szamot: \n");
    scanf("%d",&szam);

    i=0;

    while (i<N && tomb[i] != szam) {
        i++;
    }

    if (i<N) {
        printf("\nSzerepelt a %d. helyen!\n",i+1);
    } else {
        printf("\nNem szerepelt!\n");
    }
    return 0;
}
