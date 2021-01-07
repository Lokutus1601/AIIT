#include <stdio.h>
#include <stdlib.h>

int main()
{
   int zahl1, zahl2, zahlmin, zahlmax;
   char s[100];

   printf ("Min-Max-Berechnung\n");
   printf ("==================\n");

   //1. Eingabe von Zahlen
   printf("Zahl 1:");
   fgets (s, 100, stdin);
   sscanf(s,"%d", &zahl1);

   printf("Zahl 2:");
   fgets (s, 100, stdin);
   sscanf(s,"%d", &zahl2);
   //2. Zahlen vergleichen und größere und kleinere Zahlen  bvestimmen.


   if(zahl1 < zahl2)
    {
        zahlmin = zahl1;
        zahlmax = zahl2;
    }
   else
   {
        zahlmin = zahl2;
        zahlmax = zahl1;
   }



   printf("\nMinimum: %d\n", zahlmin);
   printf("\nMaximum: %d\n", zahlmax);

    return 0;
}
