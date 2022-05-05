#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 5
int main()
{
    double benzin[N];
    double hybrid[N];
    int i,j,  lower=1, upper=10;
    double range = upper - lower;
    double div = RAND_MAX /range;
    double value;
    srand(time(NULL));

    printf("Fogyasztasi ertekek sorozata (BENZIN):");
    for (i=0;i<N;i++) {
        value = lower + (rand()/div);
        benzin[i] = round(value*100) / 100;
        printf(" %.1lf",benzin[i]);
    }

    printf("\nFogyasztasi ertekek sorozata (HYBRID):");
    for (j=0;j<N;j++) {
        value = lower + (rand()/div);
        hybrid[j] = round(value*100) / 100;
        printf(" %.1lf",hybrid[j]);
    }

    int ok;
    double elteres;
    char ch;

    printf("\nAdja meg a velemenyezett elterest: ");
    do {
        ok=1;
        if (scanf("%lf",&elteres) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (elteres < 0.3 || elteres > 0.5) {
            printf("Nem jo intervallum!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');
    } while(!ok);

    printf("Velemenyezett elteres: %.2lf",elteres);
    return 0;
}
