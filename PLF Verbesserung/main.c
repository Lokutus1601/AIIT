#include <stdio.h>
#include <stdlib.h>
char s [100];
int obergrenze = 0;
int zahl1, zahl2 = 0;
int rv = 1;

int main()
{
    do
    {
        if (rv  == 0)
        {
            printf("\nBitte geben sie eine richtige Zahl ein!\n");
        }
        printf("Bitte geben sie eine Zahl bis 10000 ein! \n");
        fgets(s,sizeof(s),stdin);
        rv = sscanf(s,"%d",& obergrenze);
        if ((obergrenze >= 10000) || (obergrenze <= 1))
        {
            rv = 0;
        }
    }
    while (!(rv));

    system("cls");

    printf("\nGefundene Zahlen:\n");
    for (int test = 2, teiler =1, summe = 0, gefunden = 0; test <= obergrenze; test++)
    {
        for (teiler = 1, summe = 0; summe < test; teiler++)
        {
            if((test % teiler) == 0)
            {
                summe = summe + teiler;

            }
            if (test == summe)
            {
                gefunden++;
                printf("%4d. Zahl:%10d", gefunden,test);
                printf("\n");
            }

        }
    }

}
