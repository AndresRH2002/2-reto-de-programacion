#include stdio.h
int main()
{
    /* Andres Roman
    Equipo 4
    21 abr 21
    programa 4. Pide dos valores reales, calcula, multiplica, divide y muestra resultado
    */

   float primer, segundo, multiplica, division;
   printf("\n\n programa 3");
   printf("\n\n Saca el promedio de valores reales");
   printf("\n\n Dame el primer valor");
   scanf("%f",&primer);//permite capturar un valor real y lo guarda en variable//
   printf("\n\n Dame el segundo valor real")
   scanf("%f",&segundo);//permite capturar un valor real y lo guarda en variable//
   multiplica=primer*segundo;
   division=primer/segundo;
   printf("\nEl producto es %f", multiplica);
   printf("\nEl producto es %f", division);

   return 0;
}