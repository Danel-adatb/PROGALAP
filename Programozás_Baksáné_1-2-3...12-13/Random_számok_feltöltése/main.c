#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
//Egész számok random feltöltése:

    int tomb[N], i;
    srand(time(NULL));

    printf("A tomb elemei random egesz szamokkal(1-20 kozott): \n");

    for (i=0;i<N;i++) {
        tomb[i] = rand()%20+1;
        printf("%d\n",tomb[i]);
    }

//Random valósz számok feltöltése:

    double array[N];
    int j,  lower=10, upper=20;
    double range = upper - lower;
    double div = RAND_MAX /range;
    double value;

    printf("\nRandom VALOS szamok generalasa(10-20 kozott): \n");

    for (j=0;j<N;j++) {
        value = lower + (rand()/div);
        array[j] = round(value*100) / 100;
        printf("%.2lf\n",array[j]);
    }

//Min. sorba rendezés

    //EGÉSZEK:

    int minindex;

    for (i=0;i<N-1;i++) {
        minindex=i;
        for (j=i+1;j<N;j++) {
            if (tomb[j] < tomb[minindex]) {
                minindex=j;
            }
        }

        if (i != minindex) {
            int temp = tomb[i];
            tomb[i] = tomb[minindex];
            tomb[minindex] = temp;
        }
    }

    printf("\nMinimum kivalasztas valosaknal: \n");

    for (i=0;i<N;i++) {
        printf("%d ",tomb[i]);
    }

    //VALÓSAK

    int minindex2;

    for (i=0;i<N-1;i++) {
        minindex2 = i;
        for (j=i+1;j<N;j++) {
            if (array[j] < array[minindex2]) {
                minindex2=j;
            }
        }

        if (i != minindex2) {
            int temp2 = array[i];
            array[i] = array[minindex2];
            array[minindex2] = temp2;
        }
    }

    printf("\nMinimum kivalasztas valos szamokkal: \n");

    for (i=0;i<N;i++) {
        printf("%.2lf ",array[i]);
    }

//Max. sorba rendezés

    //EGÉSZEK:

    int maxindex;

    for (i=0;i<N-1;i++) {
        maxindex=i;
        for (j=i+1;j<N;j++) {
            if (tomb[j] > tomb[maxindex]) {
                maxindex=j;
            }
        }

        if (i != maxindex) {
            int temp = tomb[i];
            tomb[i] = tomb[maxindex];
            tomb[maxindex] = temp;
        }
    }

    printf("\nMaximum kivalasztas egeszeknel: \n");

    for (i=0;i<N;i++) {
        printf("%d ",tomb[i]);
    }

    //VALÓSAKNÁL

    int maxindex2;

    for (i=0;i<N-1;i++) {
        maxindex2 = i;
        for (j=i+1;j<N;j++) {
            if (array[j] > array[maxindex2]) {
                maxindex2=j;
            }
        }

        if (i != maxindex2) {
            int temp2 = array[i];
            array[i] = array[maxindex2];
            array[maxindex2] = temp2;
        }
    }

    printf("\nMaximum kivalasztas valos szamokkal: \n");

    for (i=0;i<N;i++) {
        printf("%.2lf ",array[i]);
    }

//Miért kerekíti le a végét a valós számoknak?


    return 0;
}
