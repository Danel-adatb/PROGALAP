#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rendezes(int* tomb, int size);
int beolvas(int tipus);


int main()
{
    int i;
    int tomb[10] = {22, 20, 35, 0, 35, 12, 0, 42};
    int size = sizeof(tomb)/sizeof(tomb[i]);

    rendezes(tomb, size);

    return 0;
}

void rendezes(int* tomb, int size) {
    tomb[size-2] = beolvas(1);
    tomb[size-1] = beolvas(2);

    int i,j;

    for (i=0;i<size-1;i++) {
        int maxindex = i;

        for (j=i+1;j<size;j++) {
            if ( tomb[j] > tomb[maxindex]) {
                maxindex = j;
            }
        }

        if (i != maxindex) {
            int temp = tomb[i];
            tomb[i] = tomb[maxindex];
            tomb[maxindex] = temp;
        }
    }

    printf("\nA tomb elemei: ");
    for (i=0;i<size;i++) {
        printf("%d ",tomb[i]);
    }

    return;
}

int beolvas(int tipus) {
    int ok, ertek;
    char ch;

    do {

        if (tipus==1) {
            printf("Adja meg a tomb 9. elemet: ");
        } else if (tipus==2) {
            printf("Adja meg a tomb 10. elemet: ");
        }

        ok=1;

        if(scanf("%d", &ertek) != 1) {
            printf("Hibas input!\n");
            ok=0;
        } else if (ertek < 0 || ertek > 50) {
            printf("Hibas intervallum!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');

    } while(!ok);

    return ertek;
}
