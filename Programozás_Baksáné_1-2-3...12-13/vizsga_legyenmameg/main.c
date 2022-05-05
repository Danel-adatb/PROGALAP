#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 200

void feltolt(int tomb[]);
void rendez(int tomb[]);
void eldont(int tomb[]);

int main()
{
    int* tomb = (int*)malloc(sizeof(int)*N);

    feltolt(tomb);
    rendez(tomb);
    eldont(tomb);

    return 0;
}

void feltolt(int tomb[]) {
    int i;
    srand(time(NULL));

    for (i=0;i<N;i++) {
        tomb[i] = rand()%130+1+50;
    }

    return;
}

void rendez(int tomb[]) {
    int i,j;

    for (i=0;i<N-1;i++) {
        int minindex = i;

        for (j=i+1;j<N;j++) {
            if (tomb[j] < tomb[minindex]) {
                minindex = j;
            }
        }

        if (i != minindex) {
            int temp = tomb[i];
            tomb[i] = tomb[minindex];
            tomb[minindex] = temp;
        }
    }

    printf("A tomb novekvo sorrendben: \n");

    for (i=0;i<N;i++) {
        printf("%d ",tomb[i]);
    }

    return;
}

void eldont(int tomb[]) {
    int i=0;

    while (i<N && tomb[i] != 150) {
        i++;
    }

    if (i<N) {
        printf("\nVolt");
    } else {
        printf("\nNem Volt");
    }

    return;
}
