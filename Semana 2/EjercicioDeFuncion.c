#include <stdio.h>


int Suma(int x){
    x = x +10;
    return x;
}


int main(){
    
    int i1 = 100;

    printf("El valor actual es: %i\n", i1);
    i1 = Suma(i1);
    printf("El valor actaulizado es : %i", i1);
}
