#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y, result;

    printf("Ket szam: ");
    scanf("%d %d",&x, &y);

    if (x%y == 0 || x*y<0) {
        result = x/y;
    } else {
        result = x/y+1;
    }

    printf("%d",result);
    return 0;
}
