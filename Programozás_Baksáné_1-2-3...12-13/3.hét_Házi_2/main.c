#include <stdio.h>
#include <stdlib.h>

double szamtani(int a, int b);
double mertani(int a, int b);

int main()
{
    int a,b;

    printf("Adja meg a szamokat: \n");
    scanf("%d %d",&a,&b);

    printf("Szamtani: %.2lf\n",szamtani(a,b));
    printf("Mertani: %.2lf\n",mertani(a,b));
    /*double szamtani, mertani;

    szamtani = (double)((a+b)/2);
    mertani = (double)(sqrt(a*b));

    printf("Szamtani: %.2lf\n",szamtani);
    printf("mertani: %.2lf\n",mertani);
    */
    return 0;
}

double szamtani(int a, int b) {
    return (a+b)/2;
}

double mertani(int a, int b) {
    return sqrt(a*b);
}
