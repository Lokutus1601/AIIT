#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char text[100];

    double laenge, breite, hoehe;

    double volumen, oberflaeche, raumdiagonale;
//Start
   printf("Quaderberechnung\n");
   printf("----------------\n");

//Zahleneingabe des Benutzers

printf("Geben sie die Laenge ein!\n");
fgets(text,100,stdin);
sscanf(text,"%lf",&laenge);

printf("Geben sie die Breite ein!\n");
fgets(text,100,stdin);
sscanf(text,"%lf",&breite);

printf("Geben sie die Hoehe ein!\n");
fgets(text,100,stdin);
sscanf(text,"%lf",&hoehe);

//volumen berechnung

volumen = laenge * breite * hoehe;

oberflaeche = laenge * breite * 2 + laenge * hoehe * 2 + breite * hoehe * 2;

raumdiagonale = sqrt(laenge*laenge+breite*breite+hoehe*hoehe);

//ausgebe der Ergebnisse

printf("Ergebniss Volumen: %.3lfm^3\n",volumen);

printf("Ergebniss Oberflaeche: %.3lfm^2\n",oberflaeche);

printf("Ergebniss Raumdiagonale: %.3lfm\n",raumdiagonale);
    return 0;
}
