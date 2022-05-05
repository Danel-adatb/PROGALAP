#include <stdio.h>
#include <stdlib.h>
#define N 3
int main()
{
    int orajel[N], memoriameret[N], hattertar[N];
    int i;

    printf("Adja meg a 3 szamitogep Orajeleit: \n");
        for (i=0;i<N;i++) {
            printf("%d. Orajel: \n",i+1);
            scanf("%d",&orajel[i]);
        }
printf("\n");
    printf("Adja meg a 3 Memoria meretet: \n");
        for (i=0;i<N;i++) {
            printf("%d. Memoria meret: \n",i+1);
            scanf("%d",&memoriameret[i]);
        }

printf("\n");
    printf("Adja meg a 3 szamitogep hattertarat: \n");
        for (i=0;i<N;i++) {
            printf("%d. hattertar: \n",i+1);
            scanf("%d",&hattertar[i]);
        }

printf("\n");
    for (i=0;i<N;i++) {
        printf("%d. Orajel: %d\n",i+1,orajel[i]);
        printf("%d. Memoria meret: %d\n",i+1,memoriameret[i]);
        printf("%d. hattertar: %d\n",i+1,hattertar[i]);
    }
    return 0;
}
