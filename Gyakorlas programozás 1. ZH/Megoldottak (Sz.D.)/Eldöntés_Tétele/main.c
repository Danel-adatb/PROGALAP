#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int tomb[N];
    int i;

    for (i=0;i<N;i++) {
        printf("Adja meg a tomb %d. elemet: %d\n",i+1);
        scanf("%d",&tomb[i]);
    }

    //Eldontes tetele:
    i=0;
    while (i<N && tomb[i] != 5) {
        i++;
    }

    if (i<N) {
        printf("Volt benne az adott elem (5)!\n");
    } else {
        printf("Nem volt benne az adott elem!\n");
    }
    return 0;
}
