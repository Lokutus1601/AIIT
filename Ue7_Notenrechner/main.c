#include <stdio.h>
#include <stdlib.h>
char s [100];
int note;
double prozent;

int main()
{
   printf("Bitte geben sie ihre Prozent ein welche sie erreicht haben!\n");
   fgets(s,100,stdin);
   sscanf(s,"%lf\n",&prozent);

   if (prozent < 50)
   {
    note = 5;
   }
   if (prozent >= 50 && prozent <= 62)
   {
    note = 4;
   }
   if(prozent >= 63 && prozent <=74)
   {
    note = 3;
   }
   if (prozent >=75 && prozent <= 86)
   {
    note = 2;
   }
   if (prozent >= 87)
   {
    note = 1;
   }

     switch
     {
       case 5:
        printf("Du hast leider einen Fünfer geschrieben");
       case 4:
        printf("Du hast einen Vierer geschrieben");
       case 3:
       printf("Du hast einen 3er geschrieben");
       case 2:
        printf("Du hast einen 2er geschrieben");
       case 1:
        printf("Gratuliere du hast einen 1er geschrieben!");


     }
   return 1;
}
