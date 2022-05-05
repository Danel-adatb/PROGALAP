#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tomb[10] = {12, 5, 9, 10, 12, 9, 10, 10};
    char ch;
    int ok,szam,i;

    printf("Ajda meg a tomb 9. elemet: ");

    do {
        ok=1;
        if (scanf("%d",&szam) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (szam < 1 || szam > 20) {
            printf("Rossz intervallum!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');

    } while (!ok);

    tomb[8] = szam;

    printf("A tomb elemei: \n");

//Átlag:

    int sum=0, db=0;

    for (i=0;i<9;i++) {
        sum += tomb[i];
        db++;
    }

    tomb[9]=ceil((double)sum/(double)db);

    printf("\n A selejtszamok szorzata: \n");

     for (i=0;i<10;i++) {
            printf("%d ",tomb[i]);
        }

//Selejtszám 105 alatt:

        db=0;

        for (i=0;i<10;i++) {
            if (tomb[i]<10) {
                db++;
            }
        }

        printf("\nSelejtszamok darabszama 10 %% alatt: %d\n",db);
    return 0;
}
