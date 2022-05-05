#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    int tmp;

    printf("x, y, z: \n");
    scanf("%d %d %d",&x, &y, &z);

    if (x>y && x>z) {
        tmp = x;
    } else if (y>x && y>z) {
        tmp = y;
    } else {
        tmp = z;
    }

    printf("\n%d", tmp);
    return 0;
}
