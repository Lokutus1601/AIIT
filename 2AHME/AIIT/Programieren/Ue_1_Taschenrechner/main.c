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
    printf("Minitaschenrechner\n");
    printf("--------------------");


    //Benutzer dazuauffordern Zahl 1 einzugeben

    printf("Geben Sie Zahl 1 ein:");
    fgets(text, 100,stdin); //fgets liest Zeichen ein und legt sie im Speicher -> auf die Variable
    sscanf(text, "%d",&zahl1);

    printf("Geben Sie Zahl 2 ein:");
    fgets(text, 100,stdin); //fgets liest Zeichen ein und legt sie im Speicher -> auf die Variable
    sscanf(text, "%d",&zahl2);

    summe = zahl1 + zahl2;

    printf("Ergebniss: %d", summe);

    return 0;
}
