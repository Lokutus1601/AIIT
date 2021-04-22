#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s[100];

   int Betrag;
   int n = 1;
   int e = 1;
   int zehn = 0;
   int zwani = 0;
   int fuffi = 0;
   int huni = 0;
   int auswahl = 0;

do
{
    switch(auswahl)
    {



     case 0:
        do
            {
               if (n == 0)
                   {
                       printf("Bitte geben sie nur gueltige Geldbetraege ein!\n");
                   }

               printf("Bitte geben sie den gewuenschten Betrag zwischen 20 Euro und 400 Euro, welchen sie abheben wollen ein:\n");
               fgets(s,sizeof(s),stdin);
               n = sscanf(s,"%d", & Betrag);

               if (!(Betrag >= 20 && Betrag <= 400) || (Betrag % 10) )
                   {
                       n = 0;
                   }

            }


        while(!n);


                int rest = 0;

                huni = Betrag / 100;
                rest = Betrag % 100;
                fuffi = rest / 50;
                rest = rest % 50;
                zwani = rest / 20;
                rest = rest % 20;
                zehn = rest / 10;
                rest = rest % 10;

                printf ("\nAuszuzahlender Betrag:%7d Euro\n", Betrag);

                printf("\nAuszahlung:\n");
                printf("\n%23d x 100 Euro\n", huni);
                printf("\n%23d x 50 Euro\n", fuffi);
                printf("\n%23d x 20 Euro\n", zwani);
                printf("\n%23d x 10 Euro\n", zehn);

     break;
    }
printf("\nBitte druecken sie 1 um das Program zu beenden oder drücken sie 0 für eine weitere Ausgabe\n");
fgets (s,sizeof (s), stdin);
sscanf(s,"%d", & auswahl);
system ("cls");
}
while (!auswahl);
}
