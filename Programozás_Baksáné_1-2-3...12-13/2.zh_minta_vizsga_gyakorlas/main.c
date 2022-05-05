#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 150

void feltolt(int tomb[]);
void novekvo(int tomb[]);
int eldont(int tomb[]);

int main()
{
    int* tomb = (int*)malloc(sizeof(int)*N);

    feltolt(tomb);
    novekvo(tomb);
    int keresett = eldont(tomb);

    if (keresett == 1) {
        printf("Volt 2500 pontosan\n");
    } else {
        printf("Nem volt\n");
    }

    return 0;
}

void feltolt(int tomb[]) {
    int i;
    srand(time(NULL));

    for (i=0;i<N;i++) {
        tomb[i] = rand()%2700+1+2500;
    }

    return;
}

void novekvo(int tomb[]) {
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

    printf("A tomb novekvo sorrendben: \n");

    for (i=0;i<N;i++) {
        printf("%d ",tomb[i]);
    }

    return;
}

int eldont(int tomb[]) {
    int i=0;

    while (i<N && tomb[i] != 2500) {
        i++;
    }

    if (i<N) {
        return 1;
    } else {
        return 0;
    }

}
