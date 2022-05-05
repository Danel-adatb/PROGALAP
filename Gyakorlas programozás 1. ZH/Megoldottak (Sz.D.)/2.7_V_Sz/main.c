#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam;

    do {
        scanf("%d",&szam);
    } while (szam < 0);

    printf("A poz. szam: %d",szam);
    return 0;
}
