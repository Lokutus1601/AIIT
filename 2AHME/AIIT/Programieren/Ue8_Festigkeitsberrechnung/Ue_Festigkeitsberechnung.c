#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char s [100];

int rechnerwahl;
int material;
double laenge;
double seitenlaenge;
double belastung;
double zugkraft;
double flaeche;
double estahl = 210000;
double ealu = 70000;
double ebeton = 30000;
double sigma;
double epsilon;
double laengenaenderung;
double a;
double b;
double c;
double alpha;
double beta;
double gamma;
double A;
double U;
int main()
{
  printf("Bitte waehlen sie ihren Rechner aus: 1 ... Festigkeitsberrechner, 2 ... Dreiecksberrechner\n");
  fgets(s,100,stdin);
  sscanf(s,"%d", & rechnerwahl);

  if(rechnerwahl < 1 || rechnerwahl > 2)
    {
    printf("Bitte geben sie eine richtige Zahl ein");
  return 1;
    }
   switch (rechnerwahl)
   {

        case 1:
                printf("Bitte geben sie das Material an: 1... Stahl, 2... Aluminium, 3... Beton\n");
                fgets(s,100,stdin);
                sscanf(s,"%d",&material);
                printf("Bitte geben sie ihre Materiallaenge(mm) ein!\n");
                fgets(s,100,stdin);
                sscanf(s,"%lf",&laenge);
                printf("Bitte geben sie ihre Flaeche(mm^2) ein!\n");
                fgets(s,100,stdin);
                sscanf(s,"%lf",&flaeche);
                printf("Bitte geben sie ihre Zugkraft (N/mm^2) ein!\n");
                fgets(s,100,stdin);
                sscanf(s,"%lf",&zugkraft);
                if(material < 1 || material > 3)
                {
                printf("Bitte geben sie eine richtige Zahl ein");
                return 2;
                }

                switch(material)
                {
                    case 1:
                    sigma = zugkraft / flaeche;
                    epsilon = sigma / estahl;
                    laengenaenderung = epsilon * laenge;
                     printf("Die Laengenaenderung betr�gt %lfmm", laengenaenderung);
                     printf("Sigma betr�gt%lf",sigma);
                    break;

                    case 2:
                     sigma = zugkraft / flaeche;
                    epsilon = sigma / ebeton;
                    laengenaenderung = epsilon * laenge;
                     printf("Die Laengenaenderung betr�gt %lfmm", laengenaenderung);
                     printf("Sigma betr�gt%lf",sigma);
                    break;

                    case 3:
                     sigma = zugkraft / flaeche;
                    epsilon = sigma / ealu;
                    laengenaenderung = epsilon * laenge;
                     printf("Die Laengenaenderung betr�gt %lfmm", laengenaenderung);
                     printf("Sigma betr�gt%lf",sigma);
                    break;

                }
                    break;


        case 2:
            printf("Bitte geben sie Seitenl�nge a ein\n");
            fgets (s,100,stdin);
            sscanf(s,"%lf",&a);

            printf("Bitte geben sie Seitenl�nge b ein\n");
            fgets (s,100,stdin);
            sscanf(s,"%lf",&b);

            printf("Bitte geben sie Seitenl�nge c ein\n");
            fgets (s,100,stdin);
            sscanf(s,"%lf",&c);

            alpha = acos((a * a + b * b - c * c)/(2.0 * a * c));

            gamma = asin(a*sin(alpha)/c);

            alpha = alpha * (180/M_PI);
            gamma = gamma * (180/M_PI);

           beta = 180 - alpha - gamma;

           U = a + b + c;

           A = sqrt(((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b)) / 4);

            printf ("Alpha ist gleich\n%.3lf Grad\n", alpha);
            printf ("Gamma ist gleich\n%.3lf Grad\n", gamma);
            printf ("Beta ist gleich \n%.3lf Grad\n", beta);
            printf ("Der Umfang betr�gt \n%.3lf mm\n", U);
            printf ("Der Fl�cheninhalt betr�gt\n%.3lf mm^2\n", A);

        break;

   }
    return 0;
}
