#include <stdio.h>
#include <stdlib.h>

double kerulet(double k, double pi, int r);
double terulet(double t, double pi, int r);

int main()
{
    int r;

    printf("Adja meg a kor sugarat: \n");
    scanf("%d",&r);

    double k,t,pi=3.14;

    printf("Kerulete: %.2lf\n",kerulet(k,pi,r));
    printf("Terulete: %.2lf\n",terulet(t,pi,r));

   /* double k,t,pi=3.14;

    printf("Adja meg a kor sugarat: \n");
    scanf("%d",&r);

    k=2*r*pi;
    t=r*r*pi;

    printf("A kor kerulete: %.2f\nA kor terulete: %.2f\n",k,t);*/
    return 0;
}

double kerulet(double k, double pi, int r) {
    return 2*r*pi;
}

double terulet(double t, double pi, int r) {
    return r*r*pi;
}
