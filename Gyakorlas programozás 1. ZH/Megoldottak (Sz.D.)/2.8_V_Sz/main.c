#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam;

    do {
        scanf("%d",&szam);
    } while(!(szam % 3 == 0 && szam % 6 != 0)); //Mi a fasz az a ! jel ott?

    printf("\n%d",szam);
    return 0;

}
