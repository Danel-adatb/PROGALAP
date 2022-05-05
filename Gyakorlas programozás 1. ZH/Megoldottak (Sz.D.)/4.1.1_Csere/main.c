#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("ADja meg 'a'-t majd 'b'-t: \n");
    scanf("%d %d",&a, &b);

    int tmp;

    tmp = a;
    a = b;
    b = tmp;

    printf("a=%d b=%d",a,b);
    return 0;
}
