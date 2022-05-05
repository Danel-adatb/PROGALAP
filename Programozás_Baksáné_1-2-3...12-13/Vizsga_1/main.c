#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 10

void general(int tomb[]);
void kiir(int tomb[]);
void ismetles(int tomb[]);

int main()
{
    int* tomb = (int*) malloc(sizeof(int)*N);

    general(tomb);
    kiir(tomb);
    ismetles(tomb);

    return 0;
}

//a.) feladat

void general(int tomb[]) {

    int i;
    srand(time(NULL));

    for (i=0;i<N;i++) {
        tomb[i] = rand()%10+1;
    }

    return;
}

//b. feladat

void kiir(int tomb[]) {
    int i,j;

    for (i=0;i<N-1;i++) {
        int minindex = i;
        for (j=i+1;j<N;j++) {
            if (tomb[j] < tomb[minindex]) {
                minindex = j;
            }
        }

        if (i!= minindex) {
            int temp = tomb[i];
            tomb[i] = tomb[minindex];
            tomb[minindex] = temp;
        }
    }

    printf("A tomb elemei novekvo sorrendben: ");
    for (i=0;i<N;i++) {
        printf("%d ",tomb[i]);
    }

    return;
}

// c.) feladat

void ismetles(int tomb[]) {
    int i,db=1;

    for (i=0;i<N;i++) {
        if (tomb[i] == tomb[i+1]) {
            db++;
        } else {
            if (db>1) {
                printf("\nA szam: %d, %d-szor fordult elo!",tomb[i],db);
            }
            db=1;
        }
    }

    return;
}





