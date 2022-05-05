#include <stdio.h>
#include <stdlib.h>

int beolvas_szam();
int osszeadas(int szam1, int szam2);
int kivonas(int szam1, int szam2);
int szorzas(int szam1, int szam2);
float osztas(int szam1, int szam2);

int main()
{
    float eredmeny;

    int szam1 = beolvas_szam();
    printf("Adja meg az operatort: ");
    char ch = getchar();
    int szam2 = beolvas_szam();

    switch(ch) {
        case '+':
            eredmeny = osszeadas(szam1,szam2);
        break;

        case '-':
            eredmeny = kivonas(szam1,szam2);
        break;

        case '*':
            eredmeny = szorzas(szam1,szam2);
        break;

        case '/':
            eredmeny = osztas(szam1,szam2);
        break;
    }

    printf("Eredmeny: %.2f",eredmeny);

    return 0;
}



int beolvas_szam() {
    int ok, szam;
    char ch;

    printf("Adjon meg egy szamot: ");
    do {
        ok = 1;

        if (scanf("%d",&szam) != 1) {
            printf("hibas input!\n");
            ok=0;
        }

        while ((ch=getchar()) != '\n');
    } while(!ok);

    return szam;
}

int osszeadas(int szam1, int szam2) {
    return szam1 + szam2;
}

int kivonas(int szam1, int szam2) {
    return szam1 - szam2;
};

int szorzas(int szam1, int szam2){
    return szam1 * szam2;
};

float osztas(int szam1, int szam2){
    return szam1 / szam2;
};
