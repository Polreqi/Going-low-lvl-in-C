#include <stdio.h> //preprocessor directive

int main(){

    /*
    
        Int y Float

    */

    // Para imprimir, debe ir entre comillas dobles
    printf("1\n");
    printf("33\n");
    
    int edad = 30;

    int year = 22;
    float presion = 92.534;

                                            // El '-' es una flag, indica la alineación (izquierda)
                                            // '3' indica el número de caracteres que se
                                            // mostrarán del argumento que se pase.
                                            // '.1' indica el número de decimales que se mostrarán.
                                            // 'f' indica el tipo de dato (float)
    //printf("El year es el %d, y el float es: %-7.1f ssss", year, presion);
    

    
    
    
    
    /*
    
        Double
    
    */
    double e = 2.71828182842904523536;

                        // Long floating point number
    printf("Numero euler: %.20lf\n", e);

    





    /*
    
        Char & String

    */
   char axle = 'a';
   char glimmer = 'g';

   printf("Caracteres:\n1. %c\n2. %c\n", axle, glimmer);


   char usaCurrency = '$';
   char percentage = '%';
   printf("Los simbolos son: '%c' y '%c'\n", usaCurrency, percentage);
   
   
   
    char phrase[] = 'Probando tipos de datos en C';
    printf("La frase es: %s", phrase);


   return 0;
}