#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 9

int main()
{
    double tomb[N], adat;
    int i,ok,munkahet=6;
    char ch;
    srand(time(NULL));
    int j,  lower=350, upper=420;
    double range = upper - lower;
    double div = RAND_MAX /range;
    double value;

//RAND FELTOLTES
    for (j=0;j<munkahet;j++) {
        value = lower + (rand()/div);
        tomb[j] = round(value*100) / 100;
        printf("%.2lf\n",tomb[j]);
    }printf("\n\n");
//Ellenorzott beolvasas
    printf("Ellenorzott beolvasas: \n");
    printf("Adja meg a 3. honap adatait: \n");

    do {
        ok=1;
        for (i=0;i<3;i++) {
            if (scanf("%lf",&adat) != 1) {
                printf("Hibas input!\n");
                ok=0;
            } else if (adat < 350 || adat > 420) {
                printf("Nem jo intervallum!\n");
                ok=0;
            } else {
                tomb[munkahet+i] = adat;
                printf("Az on %d. adata: %.1lf\n",i+7,tomb[munkahet+i]);
            }
        }

        while ((ch=getchar()) != '\n');
    } while(!ok);

    printf("\nA tomb elemei:\n");

    for (i=0;i<N;i++) {
        printf("%.1lf\n",tomb[i]);
    }
//Monton csokkkeno
    printf("\nMonoton csokkeno volt-e a sor?\n");

    int moncs=1;

    for (i=munkahet;i<N;i++) {
        if (tomb[i+1] >= tomb[i]) {
            moncs = 0;
        }
    }
    if (moncs == 1) {
        printf("Igen.\n");
    } else {
        printf("Nem.\n");
    }

//3. feladat

    printf("\nBenzinarak sorozata 8=D: %.1lf",tomb[munkahet]);
    for (i=0;i<3;i++) {
        if (i+1 < 3) {
            printf("; %.1lf",tomb[munkahet+i+1]-tomb[munkahet+i]);
        }
    }
    printf("\n");

    return 0;
}
