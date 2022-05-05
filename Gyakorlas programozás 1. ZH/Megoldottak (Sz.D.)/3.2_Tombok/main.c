#include <stdio.h>
#include <stdlib.h>
#define N 7
int main()
{
    int i, tomb[N];

    for (i=1;i<=N;i++) {
        printf("Adja meg a tomb %d. elemet: \n",i);
        scanf("%d",&tomb[i]);
    }

    int szorzat;

    for (i=1;i<=N;i++) {
        szorzat = tomb[i]*i;
        printf("A tomb szorzatai: %d\n",szorzat);
    }

    return 0;
}
