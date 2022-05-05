#include <stdio.h>
#include <stdlib.h>



int main()
{
//Ellenorzott beolvasas:

    int szam=1, max, ok;
    char ch;


    do {
        ok=1;
        printf("Adja meg az erteket ameddig a faktorialt szeretne kiszamitani: \n");
        if (scanf("%d",&max) != 1) {
            printf("Hibas input!\n");
            ok = 0;
        } else if (max <0 || max>10) {
            printf("0-10 koze eso szam legyen!\n");
            ok = 0;
        }

        while ((ch=getchar()) != '\n');
    } while(!ok);

//Faktorial kiszamitasa:

    int i;

    for (i=1;i<=max;i++) {
        szam *= i;
        printf("a %d. szam erteke: %d\n",i,szam);
    }
    return 0;
}
