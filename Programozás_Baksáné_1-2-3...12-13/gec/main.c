#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ellenorzott_beolv(int tipus);
void rendezes(int* tomb, int size);
void kiir(int* tomb, int size);
void jegyek(int* tomb,  int* jegy, int size);

int main()
{
    int i;
    int tomb[10] = {22, 20, 35, 0, 35, 12, 0, 42};
    int jegy[10];
    int size = sizeof(tomb)/sizeof(tomb[i]);


    rendezes(tomb, size);
    kiir(tomb, size);
    jegyek(tomb, jegy, size);

    return 0;
}

int ellenorzott_beolv(int tipus) {
    int ok, elem;
    char ch;

    do {
        if (tipus==9) {
            printf("Adja meg a tomb 9. elemet: ");
        } else if (tipus==10) {
            printf("Adja meg a tomb 10. elemet: ");
        }

        ok=1;

        if (scanf("%d", &elem) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (elem <= 0 || elem >= 50) {
            printf("Nem jo intervallum(0-50)!\n");
            ok=0;
        }

    while ((ch=getchar()) != '\n');
    } while (!ok);

    return elem;
}

void rendezes(int* tomb, int size) {
    int i,j;

    tomb[8] = ellenorzott_beolv(9);
    tomb[9] = ellenorzott_beolv(10);

    for (i=0;i<size-1;i++) {
        int maxindex = i;

        for (j=i+1;j<size;j++) {
            if (tomb[j] > tomb[maxindex]) {
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

void kiir(int* tomb, int size) {
    int i;

    printf("A tomb elemei rendezve: ");

    for (i=0;i<size;i++) {
        printf("%d ", tomb[i]);
    }

    return;
}

void jegyek(int* tomb, int* jegy, int size) {
    int i;

    for (i=0;i<size;i++) {
        if (tomb[i] <11 && tomb[i] >= 0) {
            jegy[i] = 1;
        } else if (tomb[i] <20 && tomb[i] >= 10) {
            jegy[i] = 2;
        } else if (tomb[i] <30 && tomb[i] >= 20) {
            jegy[i] = 3;
        } else if (tomb[i] <40 && tomb[i] >= 30) {
            jegy[i] = 4;
        } else if (tomb[i] <50 && tomb[i] >= 40) {
            jegy[i] = 5;
        }
    }

    printf("\nAz osztalyzatok: 0-10...1\t 10-20...2\t 20-30...3\t 30-40...4\t 40-50...5");
    printf("\nA jegyek: \n");

    int db=1;

    for (i=0;i<size;i++) {
        if (jegy[i] == jegy[i+1]) {
            db++;
        } else {
            if (db > 0) {
                printf("Jegy: %d\tDarabszam: %d\n",jegy[i],db);
            }
            db=1;
        }
    }

    return ;
}
