#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5
int main()
{
    int tomb[N] = {1678, 2533, 3223};
    int i,ok,adat;
    char ch;

    printf("Adja meg a 4. nap adatat: \n");
    do {
        ok=1;
        if (scanf("%d",&adat) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (adat < 1500 || adat > 4500) {
            printf("Szar intervallum!\n");
            ok=0;
        }

        while((ch=getchar()) != '\n');
    } while(!ok);

    tomb[N-2] = adat;

    srand(time(NULL));
    printf("Az 5. nap adata: \n");
    tomb[N-1] = rand()% 1500 + 1 + 3500;
    printf("%d",tomb[N-1]);

    printf("\nForditott sorozat: \n");

    for (i=N-1;i>=0;i--) {
        printf("%d ",tomb[i]);
    }

    int temp=1;

    for (i=0;i<N;i++) {
        if (tomb[i+1] >= tomb[i]) {
            temp=0;
        }
    }

    printf("\nMonoton novekvo: ");
    if (temp = 1) {
        printf("Igen");
    } else {
        printf("Nem");
    }
    return 0;
}
