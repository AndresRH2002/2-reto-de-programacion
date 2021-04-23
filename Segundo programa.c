#include stdio.h

int main() {
    /* Andres Roman
    Equipo 4
    21 abr 21
    programa 2. Pide dos valores, los suma y muestra resultado
    */

   int a, b, c; //Reciben: valores enteros

   printf ("Programa 2");
   printf ("suma de numeros");
   
   printf ("Dame el valor de a:");
   scanf ("%d, &a") // Si vas a recibir un valor entero usa %d
                //Para indicar la variable donde se guarda usa &variable
   printf ("Dame el valor de b:");
   scanf ("%d, &b");
   
   return 0;
}