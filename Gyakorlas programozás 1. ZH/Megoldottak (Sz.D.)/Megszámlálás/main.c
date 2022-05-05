#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int i, tomb[N];

    for (i=0;i<N;i++) {
        printf("Adja meg a %d. elemet: \n",i+1);
        scanf("%d",&tomb[i]);
    }

    int db=0;

    for (i=0;i<N;i++) {
        if (tomb[i] == 5) {
            db++;
        }
    }

    printf("Darabszama az adott elemeknek: %d\n",db);
    return 0;
}
