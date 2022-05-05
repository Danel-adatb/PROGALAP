#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
        int i, tomb[N];

        for (i=0;i<N;i++) {
            printf("Adja meg a tomb %d. elemet.\n",i+1);
            scanf("%d",&tomb[i]);
        }

        printf("Kiiratas: \n");

        for (i=0;i<N;i++) {
            printf("%d\n",tomb[i]);
        }
    return 0;
}
