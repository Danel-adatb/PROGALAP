#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 10

int main()
{
    int tomb[N] = {12,5,9,10,12,9,10,10};
    int i,ok,adat;
    char ch;


    printf("Adja meg a 9. elemet: \n");
    do {
        ok=1;
    if (scanf("%d",&adat) != 1) {
        printf("Hibas input!\n");
        ok=0;
    } else if (adat < 1 || adat > 20) {
        printf("Nem jo intervallum!\n");
        ok=0;
    } else {
        tomb[N-2] = adat;
    }

    while((ch=getchar()) != '\n');
    }while(!ok);

    int db=0,osszeg=0;

    for (i=0;i<N-2;i++) {
        osszeg += tomb[i];
        db++;
    }

    printf("A tomb elemei:\n");
    tomb[N-1] = ceil((double)osszeg/(double)db);

    for (i=0;i<N;i++) {
        printf("%d ",tomb[i]);
    }

//10% alatti számok:
    db = 0;
    for (i=0;i<N;i++) {
        if (tomb[i] < 10) {
            db++;
        }
    }

    printf("\nA selejtszam ennyiszer volt 10%% alatt: %d",db);
    return 0;
}
