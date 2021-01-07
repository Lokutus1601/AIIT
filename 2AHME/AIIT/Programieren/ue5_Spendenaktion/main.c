#include <stdio.h>
#include <stdlib.h>
int main()
{
  ;
		double gehalt;
		double spende;
		char s[100];
		//Benutzer zur Eingabe des Gehalts auffordern;
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
		//Ausgabe der Spende am Bildschirm;
        printf("Spende:%.2lf",spende);




	}























