#include <stdio.h>
#include <stdlib.h>
#include "math.h"

#define DEG_TO_RAD 0.01745329251994329576923690768489   //M_PI/360 entspricht [rad/°C]

//doTo In Uebung 11 umbenennen!

int main()
{
    unsigned long long pi_small_compare = 0;
    double pi_small = 0;

    unsigned long long pi_big_compare = 0;
    double pi_big = 0;

    unsigned int n = 16;

    unsigned int numOfDigits = 1;
    unsigned int maxNumOfDigits = 15;

    char s[100];
    int ok = 1;


    do
    {
        if (ok == 0)
        {
            printf("Bitte geben Sie nur ganzen Zahlen im Bereich 1-20 ein!\n\n");
        }

        printf("Geben Sie bitte die Anzahl der zu berechneten Stellen von PI ein: ");
        fgets(s, sizeof(s), stdin);
        ok = sscanf(s,"%d", &maxNumOfDigits);

        if (!(maxNumOfDigits >= 1 && maxNumOfDigits <= 20))
        {
            ok = 0;
        }

    }
    while(!ok);

    do
    {
       do
       {
            pi_small = n * sin(360*DEG_TO_RAD/(2*n));
            pi_small_compare = pi_small * pow(10,numOfDigits); //Keine Rundung notwendig weil
            pi_big = n * tan(360*DEG_TO_RAD/(2*n));
            pi_big_compare = pi_big * pow(10,numOfDigits);
            n = n+1;
       }
       while (!(pi_small_compare == pi_big_compare));

       printf("%12u  |  %1.15lf  |    %2d\n", n, pi_big_compare/pow(10,numOfDigits), numOfDigits);
       numOfDigits++;

     }
             while (numOfDigits <= maxNumOfDigits);


    return 0;
}
