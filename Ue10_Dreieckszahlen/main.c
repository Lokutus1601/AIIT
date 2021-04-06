#include <stdio.h>
#include <stdlib.h>
char s [100];
int n1, n2, n;
int dz;
int summe = 0;
int rv;
int main()
{
        do
        {
          printf("Bitte geben sie die erste Zahl ein:\n");
          fgets(s,100,stdin);
          rv = sscanf(s,"%d",&n1);
        }
        while (rv =! 1);

        do
        {
          printf("Bitte geben sie die zweite Zahl ein:\n");
          fgets(s,100,stdin);
          rv = sscanf(s,"%d",&n2);
        }
        while (rv =! 1);

        if (n1 > n2)
        {
            int help = n1;
            n1 = n2;
            n2 = help;
        }
        system("cls");
        printf ("Dreickszahlen von %d bis %d\n",n1 ,n2);
        printf("       n |     d(n) \n");
        printf("---------+-----------\n");

            for(n=n1;n<=n2;n++)
            {
                dz = (n*(n+1))/2;
                printf (" %7d | %7d\n",n , dz);
                summe = summe + dz;
            }
        printf("---------+-----------\n");
        printf("Summe:%12d",summe);



}
