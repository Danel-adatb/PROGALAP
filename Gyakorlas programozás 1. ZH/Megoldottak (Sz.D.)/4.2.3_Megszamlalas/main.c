#include <stdio.h>
#include <stdlib.h>
#define A 10
#define B 4
int main()
{
    int tomb10[A];
    int tomb4[B];

    int i,j;

    srand(time(NULL));

    printf("A 10 elemu tomb: \n");
    for (i=0;i<A;i++) {
        tomb10[i] = rand()%100+1;
        printf("%d\n",tomb10[i]);
    }

    printf("\nA 4 elemu tomb: \n");
    for (j=0;j<B;j++) {
        tomb4[j] = rand()%100+1;
        printf("%d\n",tomb4[j]);
    }

    int db=0;

    printf("\nSzamolas: \n");
    for (j=0;j<B;j++) {
        for (i=0;i<A;i++) {
            if (tomb10[i] == tomb4[j]) {
                db++;
            }
        }
    }
    printf("Darabszam: %d\n",db);
    return 0;
}
