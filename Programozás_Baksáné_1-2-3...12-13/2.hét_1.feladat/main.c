#include <stdio.h>
#include <stdlib.h>
int beker(int a, int b);

int main()
{
    int a,b;

    printf("Adja meg a ket szamot: \n");
    scanf("%d %d",&a ,&b);
    printf("%d + %d = %d",a,b,beker(a,b));

    return 0;
}

int beker(int a, int b) {
    return a+b;
}
