#include <stdio.h>
#include <stdlib.h>

#include "../Biblio/kibio.h"
int ausgabeZinstabelle(double anfangskapital,double zinssatz,double kestsatz);

int main()
{
    double zinssatz = 0;
    double kestsatz = 0;
    double anfangskapital = 0;

    //1.) Zinsatz eingeben
    if (eingabeKommaZahl("Bitte geben Sie den Zinssatz ein: ", 0, 20, &zinssatz) == 0)
        printf("Die Eingabe wurde abgebrochen"); //tue iregndwas


    //2.) Kestsatz eingeben
    eingabeKommaZahl("Bitte geben Sie den Kestsatz ein: ", 0, 20, &kestsatz);

    eingabeKommaZahl("Bitte geben sie ihr Anfangskapital ein: ", 0, 100000, &anfangskapital);

    ausgabeZinstabelle(anfangskapital, zinssatz, kestsatz);

    return 0;
}
int ausgabeZinstabelle(double anfangskapital,double zinssatz,double kestsatz)
{
    double endkapital=0;
    double zinsen=0;
    double kest=0;
    int jahr;
    char s[100];


    printf(
    " Jahr | Anfangskapital |     Zinsen |       KEST | Endkapital\n"
    "------+----------------+------------+------------+------------\n");

    endkapital = anfangskapital;
    for (jahr = 1; endkapital < anfangskapital*2; ++jahr)
    {
        zinsen = endkapital * zinssatz / 100.0;
        kest = zinsen * kestsatz / 100.0;

        printf("%5d |%11.2lf |%11.2lf |%11.2lf |%11.2lf\n",
               jahr, endkapital, zinsen, kest, endkapital + zinsen - kest);

        endkapital = endkapital + zinsen - kest;
    }
    return jahr;
}
