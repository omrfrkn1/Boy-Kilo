#include <stdio.h>
#include <locale.h>


 int main (){

 int boy,kilo;
   setlocale(LC_ALL,"Turkish");

   printf("Boyunuzu girin...\n");
   scanf("%d",&boy);



   printf("Kilonuzu girin...\n");
   scanf("%d",&kilo);

   return 0;

}
