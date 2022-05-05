#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    int min;

    printf("x: y: z: \n");
    scanf("%d %d %d",&x, &y, &z);
    min = x;

    if (y<min) {
        min=y;
    }
    if (z<min){
        min=z;
    }

    printf("%d", min);
    return 0;
}
