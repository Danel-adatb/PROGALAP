#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ev;

    printf("Adja meg az evet: ");
    scanf("%d",&ev);

    if ( ev % 400 == 0 || ev % 4 == 0) {
        printf("Szokoev!");
    } else if (ev % 100 == 0 || ev % 4 != 0) {
        printf("Nem Szokoev!");
    }
    return 0;
}
