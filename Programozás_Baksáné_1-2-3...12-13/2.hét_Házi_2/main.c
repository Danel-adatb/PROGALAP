#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;

    printf("Adjon meg egy szamot: \n");
    scanf("%f",&a);

    if (a < round(a)) {
        printf("%.2f",ceil(a));
    } else {
        printf("%.2f",floor(a));
    }


    return 0;
}
