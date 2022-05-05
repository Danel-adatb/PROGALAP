#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 10
void feltoltes(float tomb[]);
void minkiv(float tomb[]);
void intervallumadas();
int ellenorzes(int tipus);
void atlag(float tomb[]);

int also=95;
int felso=105;
int hataralso;
int hatarfelso;

int main()
{
    float* tomb = (float*) malloc(sizeof(float)*N);
    feltoltes(tomb);
    minkiv(tomb);
    intervallumadas();
    atlag(tomb);


    return 0;
}

void feltoltes(float tomb[]) {
    int i;
    float hatarok = felso - also;
    float div = RAND_MAX / hatarok;
    float ertek;
    srand(time(NULL));

    printf("A tomb elemei: \n");

    for (i=0;i<N;i++) {
        ertek = also + (rand()/div);
        tomb[i] = round(ertek*100)/100;
        printf("%.2f, ",tomb[i]);
    }

    return;
}

void minkiv(float tomb[]) {

    float minertek = felso;
    int i;

    for (i=0;i<N;i++) {
            if (tomb[i] > 100 && minertek > tomb[i]) {
            minertek = tomb[i];
        }
     }

     printf("\nLegkisebb szam: %.2f\n",minertek);

     return;
}

void intervallumadas() {
    hataralso = ellenorzes(1);
    hatarfelso = ellenorzes(2);

    if (hataralso > hatarfelso) {
        int temp = hataralso;
        hataralso = hatarfelso;
        hatarfelso = temp;
    }

    printf("Az on hatarai: %d - %d",hataralso, hatarfelso);
    return;
}

int ellenorzes(int tipus) {
    int ok, hatarertek;
    char ch;

    do {
        if (tipus == 1) {
            printf("Adja meg a hataralsot: \n");
        } else if (tipus == 2) {
            printf("Adja meg a hatarfelsot: \n");
        }

        ok = 1;

        if (scanf("%d",&hatarertek) != 1) {
            printf("hibas input!\n");
            ok=0;
        } else if (hatarertek < also || hatarertek > felso) {
            printf("Nem jo intervallum!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');
    } while(!ok);

    return hatarertek;

}

void atlag(float tomb[]) {
    int i, db=0;
    float osszeg=0, atlagszam;

    for (i=0;i<N;i++) {
        if (tomb[i] >= hataralso && tomb[i] <= hatarfelso) {
            osszeg += tomb[i];
            db++;
        }
    }

    atlagszam = osszeg/db;

    printf("\nAz atlag: %.3f\n",atlagszam);

    return;
}
