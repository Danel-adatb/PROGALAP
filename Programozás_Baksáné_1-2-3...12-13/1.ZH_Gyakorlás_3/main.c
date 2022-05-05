#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 10
int main()
{
    int tomb[N] = {12,5,9,10,12,9,10,10,11};
    int i,adat,ok;
    char ch;

    printf("Adjon meg egy erteket: \n");
    do {
        ok=1;
        if (scanf("%d",&adat) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (adat < 1 || adat > 20) {
            printf("Fos intervallum!\n");
            ok=0;
        } else {
            tomb[N-1] = adat;
        }

        while((ch=getchar()) != '\n');
    }while(!ok);
//----------------------------------------------------------------------
    printf("A selejtszamok sorozata: ");
    for (i=0;i<N;i++) {
        printf("%d ",tomb[i]);
    }
//----------------------------------------------------------------------

    int j, legtobbszam, keresettszam, elofordulas=0, elotemp;
    int feldolgozott[N], k=0, l;
    int cont;

    for (i=0;i<N;i++) {
        cont = 0;
        elotemp = 0;
        keresettszam = tomb[i];
        for (l=0;l<k;l++) {
            if (feldolgozott[l] == keresettszam) {
               cont = 1;
               continue;
            }
        }

        if (cont == 0) {
            for (j=0;j<N;j++) {
                if (tomb[j] == keresettszam) {
                    elotemp++;
                }
            }

            if (elotemp > elofordulas) {
                legtobbszam = tomb[i];
                elofordulas = elotemp;
            }

            feldolgozott[k] = keresettszam;
            k++;

            //újraindítom a gépem...
            //kész a program.
        }
    }

    printf("\nA legtobbszor elofordulo szam: %d\n",legtobbszam);
    printf("A legtobbszor elofordulo szam dbszama: %d\n",elofordulas);

//----------------------------------------------------------------------
//Legnagyobb es darabszama
    int max=tomb[0];
    int db=0;

    for (i=1;i<N;i++) {
        if (tomb[i] > max) {
            max = tomb[i];
        }

    }

    for (i=0;i<N;i++) {
        if (tomb[i] == max) {
            db++;
        }
    }

    printf("\nA legnagyobb szam: %d",max);
    printf("\nDarabszama: %d",db);
    return 0;
}
