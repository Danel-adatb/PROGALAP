#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam;

    printf("Szam: ");
    scanf("%d",&szam);

    if (szam < 0) {
        szam *= -1;
        printf("%d",szam);
    } else printf("%d",szam);
    return 0;
}
