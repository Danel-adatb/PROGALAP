#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ABCN 26
#define RANDABCN 10
char * tombgenerator(char abc[]);
void ismetles(char *randomabc);
char beolvas(char abc[]);
void elofordulas(char *randomabc,char karakter);

int main()
{
    char abc[ABCN] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char *randomabc;
    randomabc = tombgenerator(abc);
    ismetles(randomabc);

    char karakter = beolvas(abc);

    elofordulas(randomabc, karakter);
    return 0;
}

char * tombgenerator(char abc[]) {
    int i;
    static char randomabc[RANDABCN];
    srand(time(NULL));

    printf("A generalt random betuk: \n");
    for (i=0;i<RANDABCN;i++) {
        randomabc[i] = (char)(abc[rand() % ABCN]);
    }
    puts(randomabc);

    return randomabc;
}

void ismetles(char *randomabc) {
    int i,j,k=0,l,x, db;
    char feldolgozott[RANDABCN];


    for (i=0;i<RANDABCN;i++) {
        x=0;
            for(l=0;l<k;l++) {
                if (randomabc[i] == feldolgozott[l]) {
                    x=1;
                }
            }

                if (x==1) {
                    continue;
                }

        db=0;
        for (j=0;j<RANDABCN;j++) {
            if (randomabc[i] == randomabc[j]) {
                db++;
            }
        }

        if (db>1) {
            feldolgozott[k++] = randomabc[i];
            printf("%c:",randomabc[i]);
            printf("%d\n",db);
        }
    }

    return;
}

char beolvas(char abc[]) {
    char karakter;
    int ok, i;

    printf("Adjon meg egy erteket: \n");

    do {
        ok=0;
        if (scanf("%c",&karakter) == 1) {
            if (karakter != '\n') {
                for (i=0;i<ABCN;i++) {
                    if (karakter == abc[i]) {
                        ok=1;
                        break;
                    }
                }
                if (ok==0) {
                    printf("Csak az angol ABC nagybetui adhatoak meg!\n");
                }
            }
        }
    } while (!ok);

    return karakter;
}

void elofordulas(char *randomabc,char karakter) {
    int i, db=0;

    for (i=0;i<RANDABCN;i++) {
        if (randomabc[i] == karakter) {
            db++;
        }
    }
    if (db>0) {
        printf("%d-szor fordul elo a %c karakter",db,karakter);
    } else {
        printf("Nincs '%c' karakter a karakterlancban!",karakter);
    }
    return;
}
