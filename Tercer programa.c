#include stdio.h

int main() {
    /* Andres Roman
    Equipo 4
    21 abr 21
    programa 3. Pide dos valores con punto decimal, calcula promedio y muestra resultado
    */

    float primero, segundo, tercero;

    printf ("\n\n Programa 3");
    printf ("\n\n Saca el promedio de los valores reales");
    printf ("\n\n Dame el primer valor");
    scanf ("%f", &primer); //Permite capturar un valor real y lo guarda en variable primer
    printf ("\n\n Dame el segundo valor real")
    scanf ("%f", &segundo); //Permite capturar un valor real y lo guarda en variable primer
    tercero = (primer + segundo)/3;
    printf ("\n El promedio es %f", tercero);

    return 0;
}