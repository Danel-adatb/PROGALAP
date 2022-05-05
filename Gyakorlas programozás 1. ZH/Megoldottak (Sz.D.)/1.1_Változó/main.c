#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    float x, y, z;


    printf("Adja meg az a szamot: \n");
        scanf("%f",&a);
    printf("Adja meg az b szamot: \n");
        scanf("%f",&b);
    printf("Adja meg az c szamot: \n");
        scanf("%f",&c);

    x = (a*a*a*a)/3;
    y = (b*3)-(c*2);
    z = x + y;
    printf("x = %.2f\n",x);
    printf("x = %.2f\n",y);
    printf("z = %.2f\n",z);

    return 0;
}
