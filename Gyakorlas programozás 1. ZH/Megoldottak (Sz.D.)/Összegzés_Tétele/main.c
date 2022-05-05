#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int tomb[N];
    int i;

    for (i=0;i<N;i++) {
        printf("Adja meg a tomb %d. elemet: \n",i+1);
        scanf("%d",&tomb[i]);
    }

    //Osszegzes tetele:
    int sum=0;

    for (i=0;i<N;i++) {
        sum += tomb[i];
    }

    printf("A tomb elemeinek osszege: %d",sum);
    return 0;
}
