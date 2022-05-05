#include <stdio.h>
#include <stdlib.h>
#define N 3

int main()
{
    int tomb[N];
    int i;

    for (i=0;i<N;i++) {
        scanf("%d",&tomb[i]);
    }
printf("\n");
    for (i=0;i<N;i++) {
        printf("%d\n",tomb[i]);
    }

    printf("\nTombok felcserelt sorrendel: \n");

    for (i=N-1;i>=0;i--) {
        printf("%d\n",tomb[i]);
    }
    return 0;
}
