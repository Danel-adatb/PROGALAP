#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int tomb[N], i, j;
    srand(time(NULL));

    for (i=0;i<N;i++) {
        tomb[i] = rand()%10+1;
        printf("%d\n",tomb[i]);
    }

    for (i=0;i<N;i++) {
        j=0;
        while (j<i && tomb[j] != tomb[i]) {
            j++;
        }

        if (j==i) printf("A(z) %d. szamnak az elso elofordulasi helye: %d. index\n",tomb[j],i);
    }

    return 0;
}
