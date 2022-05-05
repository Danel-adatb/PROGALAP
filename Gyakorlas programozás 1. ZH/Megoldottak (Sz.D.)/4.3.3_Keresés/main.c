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
        while (j<N && tomb[j] != tomb[i]*tomb[i]) {
            j++;
        }

        if (j!=N) {
            printf("%d-es/os szam negyzete szerepelt, a %d. helyen!\n",tomb[i],i+1);
        }
    }
    return 0;
}
//Nem jól mûködik? wtf?
