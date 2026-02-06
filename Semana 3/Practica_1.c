//Autoria: Diego Gálvez Bricio
//fecha: 04/02/2026

// Modulos de importanción
#include <stdio.h>


int MemoryRepresentation() {

    short num1 = -29822;
    printf("1. -29822 en Hex (16b): %hX\n", num1);

    char num2 = (char)3012;
    printf("2. 3012 en Hex (8b)   : %hhX\n", num2);

    float f1 = 8470.125;
    printf("3. 8470.125 en Hex    : %X\n", *(unsigned int*)&f1);

    float f2 = 9912.225;
    printf("4. 9912.225 en Hex    : %X\n", *(unsigned int*)&f2);

    return 0;
}

int main(int args){
    MemoryRepresentation();      
    return 0;
}

