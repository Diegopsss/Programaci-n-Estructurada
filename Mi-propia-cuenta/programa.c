#include <stdio.h> // Esto es una librería

int main(){ // main es la función principal del programa y sin esta no puede compilar el resto del código
    
    char libro[] = "El programador Prágmatico"; // los corchetes es para ponerle char (character) que va a hacer un array de char (osea varias letras que son como palabras)

    printf("%s/n",libro); // el \n es para que no se imprima el simbolo de porcentaje  el %s es para decirle al print hey! imprimeme este valor. %s es para string osea cadena de testo

    //NOTA IMPORTANTE en C no existen los valores booleanos ya que se representan con 1 verdadero y 0 Falso

    int numeros[] = {1,2,3,4,5}; // Esto es una lista de enteros

    printf("%d\n", numeros[0]); // asi llamas a los elementos de una lista --> esto te regresa 11 por accedemos al indice 0


    // Lista de texto

    char *animales[] = {"perro", "gato", "Pato"}; //Nota en los [] puedes limitar la cantidad de memoria dentro de los arrays como *animales[3]solo puedes tener hasta 4
    printf("%s\n", animales[0]);

    

    return 0;
}