//Töltsünk fel egy 10 elemû tömböt, véletlen valós számokkal (10-20 kozott)
//Minimum kiválasztás, hogy melyik a legkisebb X
//Minimum rendezés X
//Melyik szam, hanyszor fordult elõ X
//Számolja össze az elemeket! X

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 10

void feltolt(float tomb[]);
void minkiv(float tomb[]);
void maxkiv(float tomb[]);
void minrend(float tomb[]);
void maxrend(float tomb[]);
void elofordulas(float tomb[]);
void szumma(float tomb[]);

int main()
{
    float* tomb = (float*)malloc(sizeof(float)*N);

    feltolt(tomb);
    minkiv(tomb);
    maxkiv(tomb);
    minrend(tomb);
    maxrend(tomb);
    elofordulas(tomb);
    szumma(tomb);

    return 0;
}

//-------------------------------------------------------

void feltolt(float tomb[]) {
    int i, lower=10, upper=20;
    float range = upper - lower;
    float div = RAND_MAX/range;
    float value;
    srand(time(NULL));

    printf("A random valos szamok: \n");

    for (i=0;i<N;i++) {
        value = (rand()/div);
        tomb[i] = round(value*100)/100;
        printf("%.2f ",tomb[i]);
    }

    return;
}

//-------------------------------------------------------

void minkiv(float tomb[]) {
    float min = tomb[0];
    int i;

    for (i=0;i<N;i++) {
        if (tomb[i] < min) {
            min = tomb[i];
        }
    }

    printf("\nA legkisebb elem: %.2f\n",min);

    return;
}

//-------------------------------------------------------

void maxkiv(float tomb[]) {
    float max = tomb[0];
    int i;

    for (i=0;i<N;i++) {
        if (tomb[i] > max) {
            max = tomb[i];
        }
    }

    printf("A legnagyobb elem: %.2f",max);

    return;
}

//-------------------------------------------------------

void minrend(float tomb[]) {
    int i,j;

    printf("\nA minimum rendezes: ");

    for (i=0;i<N-1;i++) {
        int minindex = i;

        for (j=i+1;j<N;j++) {
            if (tomb[j] < tomb[minindex]) {
                minindex = j;
            }
        }

        if (i!= minindex) {
            float temp = tomb[i];
            tomb[i] = tomb[minindex];
            tomb[minindex] = temp;
        }
    }

    for (i=0;i<N;i++) {
        printf("%.2f ",tomb[i]);
    }

    return;
}

//-------------------------------------------------------

void maxrend(float tomb[]) {
    int i,j;

    printf("\nA sorbarendezes maximum szerint: ");

    for (i=0;i<N-1;i++) {
        int maxindex = i;

        for (j=i+1;j<N;j++) {
            if (tomb[j] > tomb[maxindex]) {
                maxindex = j;
            }
        }

        if (i != maxindex) {
            float temp = tomb[i];
            tomb[i] = tomb[maxindex];
            tomb[maxindex] = temp;
        }
    }

    for (i=0;i<N;i++) {
        printf("%.2f ",tomb[i]);
    }

    return;
}

//-------------------------------------------------------

void elofordulas(float tomb[]) {
    int i, db=1;

    for (i=0;i<N;i++) {
        if (tomb[i] == tomb[i+1]) {
            db++;
        } else {
            if (db>1) {
                printf("Tobbszor elofordult szam: %.2f (%d-szer)",tomb[i],db);
            }
            db=1;
        }
    }

}

//-------------------------------------------------------

void szumma(float tomb[]) {
    int i;
    float sum=0;

    for (i=0;i<N;i++) {
        sum += tomb[i];
    }

    printf("\nA tomb elemeinek osszege: %.2f",sum);

    return;
}
