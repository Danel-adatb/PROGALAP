#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c;

   printf("Adja meg a 3 szamot (spacekkel tagolva): \n");
   scanf("%d %d %d",&a, &b, &c);

   int ab, bc, ac;

   ab = a*b;
   bc = b*c;
   ac = a*c;

   int x, y, z;

   x = ab+bc+ac;
   y = ab*bc*ac;
   z = ab - ac;

   printf("x , y es z: %d, %d, %d\n",x,y,z);

    return 0;
}
