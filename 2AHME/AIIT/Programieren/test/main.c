#include <stdio.h>
#include <stdlib.h>

int main()
{
     int zahl1, zahl2,zahl3, minimum = 0;
   char s[100];

   printf ("Min-Max-Berechnung\n");
   printf ("==================\n");

   printf("Zahl 1:");
   fgets (s, 100, stdin);
   sscanf(s,"%d", &zahl1);
   printf("Zahl 2:");
   fgets (s, 100, stdin);
   sscanf(s,"%d", &zahl2);
   printf("Zahl 3:");
   fgets (s, 100, stdin);
   sscanf(s,"%d", &zahl3);
   if(zahl1 < zahl2)
    {
       if (zahl1<zahl3)
        minimum = zahl1;
       else
        minimum = zahl3;
    }
   else
    {
        if(zahl2 < zahl3)
        minimum = zahl2;
        else
        minimum = zahl3;
    }
   printf("\nMinimum: %d\n", minimum);

    return 0;
}
