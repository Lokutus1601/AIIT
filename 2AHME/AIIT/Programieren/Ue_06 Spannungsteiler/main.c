#include <stdio.h>
#include <stdlib.h>

int main()
{
    double R1, R2, I1, I2, I;
    int error=0, gesamtR=0, gesamtI=0;
    char s [100];

    printf("ETE-Berechnung");
    printf("\n==============\n\n");

    printf("Bitte geben Sie Ihre Werte an!\n");

    printf("\nWiderstand 1:");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &R1);

    printf("\nWiderstand 2:");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &R2);

    printf("\nStrom 1:");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &I1);

    printf("\nStrom 2:");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &I2);

    printf("\nGesamtstrom:");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &I);

    printf("-----------------");

    if(R1>0)
        {
            gesamtR = gesamtR + 1;
        }

    if(R2>0)
        {
            gesamtR = gesamtR + 1;
        }

    if(I1>0)
        {
            gesamtI = gesamtI + 1;
        }

    if(I2>0)
        {
            gesamtI = gesamtI + 1;
        }

    if(I>0)
        {
            gesamtI = gesamtI + 1;
        }

    //Berechnung des Fehlers
    if(gesamtR == 2)
    {
        if(gesamtI == 1)
           error = 0;
        else
            error = 1;
    }
    else if(gesamtI == 2)
    {
        if(gesamtR != 1)
           error = 1;
    }
    else
        error = 1;

    if (error)
        printf("\nFehlermeldung\n-----------------\n");

    else if( ( gesamtR == 2) && (I1 > 0) )
    {
        //R1, R2, I1 sind bekannt -> Ausrechnen I2, gesamtI
        //unbekannte I2, und gesamtI ausrechnen
        //I2/I1 = R1/R2

        I2 = (R1 * I1) / R2;
        I = I1 + I2;

        printf("\nDer Strom 2 betraegt: %lf", I2);
        printf("\n\nDer Gesamtstrom betraegt: %lf\n\n", I);

    }
    else if( ( gesamtR == 2) && (I2 > 0) )
    {

        I1 = (R2 * I2) / R1;
        I = I1 + I2;

        printf("\nDer Strom 1 betraegt: %lf", I1);
        printf("\n\nDer Gesamtstrom betraegt: %lf\n\n", I);

    }
    else if( ( gesamtR == 2) && (gesamtI > 0) )
    {

    I1 = ((((R1 * R2)/(R1 + R2))*I)/R1);
    I2 = ((((R1 * R2)/(R1 + R2))*I)/R2);

    printf("\nDer Strom 1 betraegt: %lf", I1);
    printf("\nDer Strom 2 betraegt: %lf\n\n", I2);

    }
    else if( ( gesamtI == 2) && (R1 > 0) )
    {

        R2 = (R1 * I1) / I2;
        I = I1 + I2;

        printf("\nDer Widerstand 2 betraegt: %lf", R2);
        printf("\n\nDer Gesamtstrom betraegt: %lf\n\n", I);


    }
    else if( ( gesamtI == 2) && (R2 > 0) )
    {

        R1 = (R2 * I2) / I1;
        I = I1 + I2;

        printf("\nDer Widerstand 1 betraegt: %lf", R1);
        printf("\n\nDer Gesamtstrom betraegt: %lf\n\n", I);


    }

    return 0;
}
