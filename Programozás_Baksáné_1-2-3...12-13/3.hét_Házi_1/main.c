#include <stdio.h>
#include <stdlib.h>

int beker_a(int a);
int beker_b(int b);

int main()
{
    int a,b;

    printf("A bekert szamok: %d %d\n",beker_a(a),beker_b(b));

    /*do {
        ok=1;

        if (scanf("%d",&a) != 1) {
            printf("Hibas adatot adott meg!\n");
            ok=0;
        } else if (a<5 || a>10) {
            printf("Nem jo intervallum!\n");
            ok=0;if (a<b) {
        printf("A(z) %d a nagyobb!\n",b);
    } else if (a>b) {
       printf("A(z) %d nagyobb!\n",a);
    } else {
        printf("%d es %d egyenlo!\n",a,b);
    }
        }

        while ((ch=getchar()) != '\n');
    } while(!ok);

    do {
        ok=1;

        if (scanf("%d",&b) != 1) {
            printf("Hibas adatot adott meg!\n");
            ok=0;
        } else if (b<5 || b>10) {
            printf("Nem jo intervallum!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');
    } while(!ok);

    printf("\nA ket szam: %d, %d\n",a,b);

    if (a<b) {
        printf("A(z) %d a nagyobb!\n",b);
    } else if (a>b) {
       printf("A(z) %d nagyobb!\n",a);
    } else {
        printf("%d es %d egyenlo!\n",a,b);
    }*/
    return 0;
}

int beker_a(int a) {
    int ok=1;
    char ch;

    printf("Adja meg a 'a'-t: ");

    do {
        ok=1;

        if (scanf("%d",&a) != 1) {
            printf("Hibas adatot adott meg!\n");
            ok=0;
        } else if (a<5 || a>10) {
            printf("Nem jo intervallum!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');
    } while(!ok);

    return a;
}


int beker_b(int b) {
    int ok;
    char ch;

    printf("Adja meg a 'b'-t: ");

    do {
        ok=1;

        if (scanf("%d",&b) != 1) {
            printf("Hibas adatot adott meg!\n");
            ok=0;
        } else if (b<5 || b>10) {
            printf("Nem jo intervallum!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');
    } while(!ok);

    return b;
}
