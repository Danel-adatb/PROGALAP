#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ellenorzes(int a, int b, int c);
int kerulet(int a, int b, int c);
double terulet(double s, double t, double t2, int a, int b, int c);

int main()
{
    int a,b,c;
    double t,t2,s;

    printf("Adja meg a 3szog oldalat: \n");
    scanf("%d %d %d",&a,&b,&c);

    if (ellenorzes(a,b,c) == 1) {
        printf("Nincs ilyen 3szog!\n");
    } else {
        printf("A 3szog kerulete: %d\nTerulete: %.2lf\n",kerulet(a,b,c),terulet(s,t,t2,a,b,c));
    }

   // printf("A 3szog kerulete: %d\n",kerulet(a,b,c));

    /*printf("Adja meg a 3szog oldalait: \n");
    scanf("%d %d %d",&a,&b,&c);

    if (a+b<c || b+c<a || a+c<b) {
        printf("Nincs ilyen 3szog dik!\n");
    } else {

    double s,t,t2;

    s=(double)(a+b+c)/2;
    t2 = s*(s-a)*(s-b)*(s-c);
    t=sqrt(t2);

    printf("A 3szog terulete: %.2f\nKerulete: %d",t,a+b+c);
    } */
    return 0;
}

int ellenorzes(int a, int b, int c) {
    int dont=0;
    if (a+b<c || b+c<a || a+c<b) {
        dont=1;
    }

    return dont;
}

int kerulet(int a, int b, int c) {
    return a+b+c;
}

double terulet(double s, double t, double t2, int a, int b, int c) {
    s=(double)(a+b+c)/2;
    t2 = s*(s-a)*(s-b)*(s-c);
    t=sqrt(t2);

    return t;
}
