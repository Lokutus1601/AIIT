#include <stdio.h>
#include <stdlib.h>
double zinsen = 0, zinssatz = 0, kapital = 0, kest = 0, kestsatz = 0, endkapital = 0,  jahre = 0;
double kap = 0;
int rv = 1;
char s[100];
int main()
{
    do
    {
        if (rv == 0)
        {
            printf("Bitte geben sie ein gueltiges Kapital an!\n");
        }
        printf("Bitte geben sie ihr Kapital an: ");
        fgets(s,sizeof(s),stdin);
        rv = sscanf(s,"%lf",&kapital);
        if(kapital <= 0)
        {
            rv = 0;
        }
    }
    while (!rv);

     do
    {
        if (rv == 0)
        {
            printf("\nBitte geben sie einen gueltigen Zinssatz an!\n");
        }
        printf("Bitte geben sie ihren Zinssatz an: ");
        fgets(s,sizeof(s),stdin);
        rv = sscanf(s,"%lf",&zinssatz);
        if(zinssatz <= 0 || zinssatz >= 100)
        {
            rv = 0;
        }
    }
    while (!rv);

     do
    {
        if (rv == 0)
        {
            printf("\nBitte geben sie einen gueltigen KESTSATZ an!\n");
        }
        printf("Bitte geben sie ihren KESTSATZ an: ");
        fgets(s,sizeof(s),stdin);
        rv = sscanf(s,"%lf",&kestsatz);
        if(kestsatz <= 0 || kestsatz>= 100)
        {
            rv = 0;
        }
    }
    while (!rv);
    system("cls");
    printf ("ZINSRECHNER\n");
    printf ("===========\n");
    printf ("Anfangskapital: %.0lf\n",kapital);
    printf ("      Zinssatz: %.0lf\n",zinssatz);
    printf ("     Kest-Satz: %.0lf\n", kestsatz);


    printf("\n\nJahr | Startkapital |   Zinsen |    KEST | Endekapital");
     printf("\n-----+--------------+----------+---------+------------");

    kap = kapital;
    for(endkapital = kapital; endkapital < kapital * 2;)
    {

        zinsen = endkapital * zinssatz / 100;
        kest = zinsen * kestsatz / 100;
        endkapital = kap + zinsen - kest;
        jahre++;
        printf("\n%5.lf|%14.2lf|%10.2lf|%9.2lf|%12.2lf", jahre, kap, zinsen, kest, endkapital);

        kap = endkapital;

    }
}
