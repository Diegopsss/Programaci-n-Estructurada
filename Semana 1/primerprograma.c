#include <stdio.h>

int main(){

    int n1 = 100;
    char message = 'X';
    float f1 = 12.5;

    printf("Hola Mundo \n");
    printf("El valor de n1 es: %d \n", n1);
    printf("el valor del mensaje es %c \n", message);
    printf("el valor de f1 es: %f \n", f1);
    
    int n2;
    scanf("Escribe aqui: --> %i", &n2); //el & antes de la variable es para hacer referencia a la dirección de la memoria y no a la dirección de donde se almacena la variable como comunmente se hace

    //NOTA una variable esta compuesta como un valor que esta almacenada en algun lado de la memoria con una dirección hexadecimal. 

    printf("RESPUESTA AQUI: i%", n2);

    int resultado;
    int n1s = 5;
    int n2s = 7;

    resultado = n1s + n2s;

    printf("Este es el resultado: %i", resultado);

};
