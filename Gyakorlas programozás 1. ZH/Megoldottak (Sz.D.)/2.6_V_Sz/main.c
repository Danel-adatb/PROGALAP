#include <stdio.h>
#include <stdlib.h>
int main()
{
    int szam, i;

    for (i=0;i<5;i++) {
        scanf("%d",&szam);
        printf("Negyzete: %d", szam*szam);
    }
    return 0;
}
