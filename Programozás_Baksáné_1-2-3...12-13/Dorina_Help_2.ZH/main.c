#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void feltoltes(int tomb[], int szulszam);
void rendezes(int tomb[],int szulszam);
void kiir(int tomb[], int szulszam);
void kivalaszt(int tomb[], int szulszam);

int main()
{
    int szulszam, ok;
    char ch;

    printf("Adja meg az ujszulottek szamat: \n");

    do {
        ok=1;
        if (scanf("%d",&szulszam) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (szulszam < 1 || szulszam > 150) {
            printf("Maximum 150-et adhat meg!\n");
            ok=0;
        }

    while ((ch=getchar()) != '\n');
    } while (!ok);

    int* tomb = (int*) malloc(sizeof(int)*szulszam);

    feltoltes(tomb, szulszam);
    rendezes(tomb,szulszam);
    kiir(tomb,szulszam);
    kivalaszt(tomb,szulszam);

    return 0;
}

void feltoltes(int tomb[], int szulszam) {
    int i;
    srand(time(NULL));

    for (i=0;i<szulszam;i++) {
        tomb[i] = rand() % 2700 + 1 + 2500;
    }
    return;
}

void rendezes(int tomb[],int szulszam) {
    int i,j;

    for (i=0;i<szulszam-1;i++) {
        int maxindex=i;
        for (j=i+1;j<szulszam;j++) {
            if (tomb[j] < tomb[maxindex]) {
                maxindex = j;
            }
        }
            if (i!=maxindex) {
            int temp = tomb[i];
            tomb[i] = tomb[maxindex];
            tomb[maxindex] = temp;
        }
    }

    return;
}

void kiir(int tomb[], int szulszam) {
    int i;

    printf("A sorba rendezes utan a sor: \n");

    for (i=0;i<szulszam;i++) {
        printf("%d\n",tomb[i]);
    }
}

void kivalaszt(int tomb[], int szulszam) {
    int i=0;

    while (i<szulszam && tomb[i] != 2500) {
        i++;
    }

    if (i < szulszam) {
        printf("Igen volt olyan Baba, amely pontosan 2500!\n");
    } else {
        printf("Nem volt olyan Baba, ami pont 2500!\n");
    }

    return;
}
