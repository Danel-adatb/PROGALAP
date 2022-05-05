#include <stdio.h>
#include <stdlib.h>

int beker_1(int szam1);
int beker_2(int szam2);
int beker_3(int szam3);
void sorrend(int tomb[], const int n);


int main()
{
    const int n=3;
    int i, szam1,szam2,szam3, tomb[n];

    //BEKÉRÉS
    //FELTÖLTÉS
    beker_1(szam1);
    beker_2(szam2);
    beker_3(szam3);
    //NÖVEKVÕ SORREND

    sorrend(tomb, n);

    return 0;
}

int beker_1(int szam1) {
    char ch;
    int ok, tomb[0];

    printf("Adja meg az elso szamot: \n");

    do {
        ok=1;
        if (scanf("%d",&szam1) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (szam1 < 1) {
            printf("Pozitivat adjon meg!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');
    } while (!ok);

    tomb[0] = szam1;
    return tomb[0];
}

int beker_2(int szam2) {
    char ch;
    int ok, tomb[1];

    printf("Adja meg a masodik szamot: \n");

    do {
        ok=1;
        if (scanf("%d",&szam2) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (szam2 < 1) {
            printf("Pozitivat adjon meg!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');
    } while (!ok);

    tomb[1] = szam2;
    return tomb[1];
}

int beker_3(int szam3) {
    char ch;
    int ok, tomb[2];

    printf("Adja meg a harmadik szamot: \n");

    do {
        ok=1;
        if (scanf("%d",&szam3) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (szam3 < 1) {
            printf("Pozitivat adjon meg!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');
    } while (!ok);

    tomb[2] = szam3;
    return tomb[2];
}

void sorrend(int tomb[], const int n) {
    int minindex,i,j;

    for (i=0;i<n-1;i++) {
        minindex=i;
        for (j=i+1;j<n;j++) {
            if (tomb[j] < tomb[minindex]) {
                minindex=j;
            }
        }
        if (i != minindex) {
            int tmp = tomb[i];
            tomb[i] = tomb[minindex];
            tomb[minindex] = tmp;
        }
    }

    printf("\nForditott sorrend: \n");

    for (i=0;i<n;i++) {
        printf("%d ",tomb[i]);
    }
    return;
}
