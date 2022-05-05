#include <stdio.h>
#include <stdlib.h>

int beker_felso(int felso);
int beker_also(int also);
int szamolas(int db);

int main()
{
    int felso,also,db=0,i;

    beker_felso(felso);
    beker_also(also);

    for (i=beker_also(also);i<=beker_felso(felso);i++) {
        if (i % 4 == 0 || i % 400 == 0) {
            db++;
        }
    }

    printf("%d db szokoev volt!",db);
   /*int felso,also;
   char ch;

   printf("Adja meg a felso hatart: \n");

    do {
    if (scanf("%d",&felso) != 1) {
        printf("Hibas input!\n");
    }
   } while ((ch=getchar()) != '\n');

   printf("Adja meg az also hatart: \n");

    do {
    if (scanf("%d",&also) != 1) {
        printf("Hibas input!\n");
    }
   } while ((ch=getchar()) != '\n');

//Szamolas

    int i,db;
    db=0;
    for (i=also;i<=felso;i++) {
        if ((i % 4 == 0 || i % 400 == 0)) {
            db++;
        }
    }

    printf("%d db szokoev volt ebben az intervallumban!\n",db);
    */
    return 0;
}

int beker_felso(int felso) {
    char ch;

    printf("Adja meg a felsohatar: ");

    do {
        if (scanf("%d",&felso) != 1) {
            printf("Hibas input!\n");
        }
    } while ((ch=getchar()) != '\n');

    return felso;
}

int beker_also(int also) {
    char ch;

    printf("Adja meg az alsohatart: ");

    do {
        if (scanf("%d",&also) != 1) {
            printf("Hibas input!\n");
        }
    } while ((ch=getchar()) != '\n');

    return also;
}

/*printf("Adjon meg egy szamot 1000-2019 kozott! \n");

   do {
        scanf("%d",&szam);

        while ((ch=getchar() != '\n'));
   } while (szam < ALSO || szam > FELSO);

   if ((szam % 4 == 0 && szam % 100 != 0) || (szam % 400 == 0)) {
    printf("Szokoev!");
   } else {
    printf("Nem szokoev!");
   }*/
