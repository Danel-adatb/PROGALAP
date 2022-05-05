#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int tomb[N], i;
    srand(time(NULL));

//feltöltés!

    for (i=0;i<N;i++) {
        tomb[i] = rand()%10+1;
        printf("%d\n",tomb[i]);
    }

//Szám bekérése!

    int szam;

    printf("\nAdjon meg egy szamot: \n");
    scanf("%d",&szam);

//Szerepelt-e benne?
    i=0;
    while (i<N && tomb[i] != szam) {
        i++;
    }

    if (i<N) {
        printf("Igen szerepelt a szam, a %d. indexnel!\n",i);
    } else {
        printf("Nem szerepelt\n!");
    }

//Darabszam!

    int db;

    db=0;

    for (i=0;i<N;i++) {
        if (tomb[i] == szam) {
            db++;
        }
    }

    printf("\nA darabszam: %d",db);

    return 0;
}
