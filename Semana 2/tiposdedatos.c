#include <stdio.h>

int main(){
    int int1;
    int array1[10]; //cuando inicias el arreglo le tienes que pasar el numero de bytes que va a reservar cada int guarda 4 bytes entonces este array guerda 40bytes

    array1[0] = 100;
    array1[10] = 100; // esta variable no va a llegar

    //  como no se puede imprimir directo una lista de enteros tendremos que iterar con un for

    for (int i = 0; i < 9; i++)
    {
        printf("%i\t", array1[i]); // el \t es para darle un tabulador y no un enter
    }
    
}