#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//-----------------------------------------------------------------------------

void kiszamitasa(float* magassag, int* tomeg, float* tti, int size);
void rendezes(float* tti, int size);
void kiir(float* tti, int size);
int ellenorzott_hatar(int tipus);
int vallumtti(float* tti, int size, int hataralso, int hatarfelso);

//-----------------------------------------------------------------------------

int main()
{
    int i;

    float magassag[5] = {1.20, 1.16, 1.52, 1.18, 1.32};
    int tomeg[5] = {38, 30, 45, 42, 44};
    float tti[5];

    int size = sizeof(magassag)/sizeof(magassag[i]);

    kiszamitasa(magassag, tomeg, tti, size);
    rendezes(tti, size);
    kiir(tti, size);

    int hataralso = ellenorzott_hatar(1);
    int hatarfelso = ellenorzott_hatar(2);

    if (hataralso > hatarfelso) {
        int temp = hataralso;
        hataralso = hatarfelso;
        hatarfelso = temp;
    } else if (hataralso == hatarfelso) {
        printf("\nKerem adjon meg uj hatarokat, azonosak nem lehetnek!\n");
        hataralso = ellenorzott_hatar(1);
        hatarfelso = ellenorzott_hatar(2);
    }

    printf("\n az on hatarai: %d-%d\n",hataralso,hatarfelso);

    int osszeg = vallumtti(tti, size, hataralso, hatarfelso);

    printf("\nDarabszama, hogy hany gyerek volt az intervallumban: %d",osszeg);

    return 0;
}

//-----------------------------------------------------------------------------

void kiszamitasa(float* magassag, int* tomeg, float* tti, int size) {
    int i;

    for (i=0;i<size;i++) {
        tti[i] = tomeg[i]/(magassag[i]*magassag[i]);
        printf("Az %d. gyerek ttije: %.2f\n",i+1,tti[i]);
    }

}

//-----------------------------------------------------------------------------

void rendezes(float* tti, int size) {
    int i,j;

    for (i=0;i<size-1;i++) {
        int minindex = i;

        for (j=i+1;j<size;j++) {
            if (tti[j] < tti[minindex]) {
                minindex = j;
            }
        }

        if (i!=minindex) {
            float temp = tti[i];
            tti[i] = tti[minindex];
            tti[minindex] = temp;
        }
    }

    return;
}

//-----------------------------------------------------------------------------

void kiir(float* tti, int size) {
    int i;

    printf("\nA rendezett tomb elemei:\n");

    for (i=0;i<size;i++) {
        printf("%.2f\n",tti[i]);
    }
}

//-----------------------------------------------------------------------------

int ellenorzott_hatar(int tipus) {
    int ok, hatar;
    char ch;

    do {
        if (tipus==1) {
            printf("\nAdja meg a hataralsot: ");
        } else if (tipus==2) {
            printf("\nAdja meg a hatarfelsot: ");
        }

        ok=1;

        if(scanf("%d", &hatar) != 1) {
            printf("\nHibas input!");
            ok=0;
        } else if (hatar < 15 || hatar > 40) {
            printf("\nHibas intervallum!");
            ok=0;
        }

        while((ch=getchar()) != '\n');
    } while(!ok);

    return hatar;
}

//-----------------------------------------------------------------------------

int vallumtti(float* tti, int size, int hataralso, int hatarfelso) {
    int i,db=0;

    for (i=0;i<size;i++) {
        if ((int)tti[i] <= hatarfelso && (int)tti[i] >= hataralso) {
            db++;
        }
    }

    return db;
}
