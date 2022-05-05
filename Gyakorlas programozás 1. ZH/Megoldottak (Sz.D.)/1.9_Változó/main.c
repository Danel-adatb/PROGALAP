#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    printf("Adja meg a szamokat: \n");
    scanf("%d %d %d",&x, &y, &z);

    int eredmeny=(3*x)-(y*z);

    printf("%d", eredmeny);
    return 0;
}
