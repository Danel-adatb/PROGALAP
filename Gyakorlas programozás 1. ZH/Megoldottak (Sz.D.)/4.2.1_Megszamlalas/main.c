#include <stdio.h>
#include <stdlib.h>
#define N 6
int main()
{
    int tomb[N];
    int i;

    for (i=0;i<N;i++) {
        printf("A tomb %d. eleme: \n");
        scanf("%d",tomb[i]);
    }

    int db=0;

    for (i=0;i<N;i++) {
        if (tomb[i] == 5) {
            db++;
        }
    }

    printf("Darabszam: %d\n",db);

    return 0;
}
