#include <stdio.h>
#include <stdlib.h>
int main()
{

		double gehalt;
		double spende;
		char s[100];
		int auswahl;

		printf ("Spendenaktion\n");
		printf ("==============");
		//Benutzer zur Eingabe des Gehalts auffordern;

		printf ("Wollen sie etwas Spenden?"  "[0... Nein , 1... JA]");
		fgets(s,100,stdin);
		sscanf(s,"%d", &auswahl);
		fflush(stdin);
		if (auswahl == 0)
		{
		    printf("\nNein\n");
		}
		else if(auswahl == 1)
            printf ("\nJA\n");
        else
            printf ("\n keine gültige Eingabe!\n");

		switch(auswahl)
		{
        case 0:
            printf ("\nSchade, dass sie bei der Aktion nicht teilnehmen!");
            break;
        case 1:
            printf ("Bitte geben sie ihr Gehalt ein!\n");
            fgets(s,100, stdin);
            sscanf (s,"%lf", &gehalt);
            if (gehalt <= 2000)
            {
			//Spende berechnen;
			spende = gehalt * 0.005;
            }
            else
            {
                if (gehalt <= 4000)
                {
                    //Spende berechnen;
				spende = gehalt * 0.01;
                }
                else
                {
                spende = 50;
                }
            }
		}break;





		//Ausgabe der Spende am Bildschirm;
        printf("Spende:%.2lf",spende);




	}























