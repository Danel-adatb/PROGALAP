#include <stdio.h>
#include <stdlib.h>
int felszin(int a, int b, int c);
int terfogat(int a, int b, int c);

int main()
{
    int a,b,c;

    printf("Teglalap oldalai: \n");
    scanf("%d %d %d",&a,&b,&c);

    printf("Felszin: %d\nTerfogat: %d\n",felszin(a,b,c),terfogat(a,b,c));

    /*printf("Adja meg a teglalap 3 oldalat: \n");
    scanf("%d %d %d",&a,&b,&c);

    printf("Felszin: %d\nTerfogata: %d\n",2*(a*b+a*c+b*c),a*b*c);*/
    return 0;
}

int felszin(int a, int b, int c) {
    return 2*(a*b+a*c+b*c);
}

int terfogat(int a, int b, int c) {
    return a*b*c;
}
