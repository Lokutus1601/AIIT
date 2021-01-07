/*
Erstes C Program: ''Mini-Taschenrechner''
Autor: Aubel Lukas 2AHME
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Deklaratioin von Variablen
    char text[100];       //Speicherplatz für 100 Zeichen im RAM reservieren, der Name der Variable ''s''

    int zahl1;

    int zahl2;

    int summe, differenz, produkt, division;
    // Ausgabe des Titels

   printf("Minitaschenrechner starting up...\n");

    printf("Minitaschenrechner\n");
    printf("--------------------\n");


    //Benutzer dazuauffordern Zahl 1 einzugeben

    printf("Geben Sie Zahl 1 ein:");
    fgets(text, 100,stdin); //fgets liest Zeichen ein und legt sie im Speicher -> auf die Variable
    sscanf(text, "%d",&zahl1);

    printf("Geben Sie Zahl 2 ein:");
    fgets(text, 100,stdin); //fgets liest Zeichen ein und legt sie im Speicher -> auf die Variable
    if (sscanf(text, "%d",&zahl2) != 1);
        printf("Lieber Benutzer, kennen Sie keine Zahlen?!\n");

    //Addieren
    summe = zahl1 + zahl2;

    differenz = zahl1 - zahl2;

    produkt = zahl1 * zahl2;

    division = zahl1 / zahl2;

    printf("Ergebniss Summe: %d\n", summe);

    printf("Ergebniss Differenz: %d\n", differenz);

    printf("Ergebniss Produkt: %d\n", produkt);

    printf("Ergebniss Division: %d\n", division);

    printf("Dies sind deine Ergebnisse");

    return 0;
}
