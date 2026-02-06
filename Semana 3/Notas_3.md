# 2. Elementos del lenguaje C - Parte 3

### 2.7 Modificadores: const, short, long, unsigned

Modificador de signo unsigned.

Nota: El modificador static hace que la variable no se muere junto con su ambiente local


## 1. Enteros
Enteros sin signo un entero sin signo es un entero cuyo rango posible de valores está entre 0 e inginito positivo. No hay manera de almacenar en la práctica números hasta el infinito, debido a las limitaciones en la memoria de la computadora y la arquitectura de la misma(32 y 64 bits por ejemplo).

# 3. Control de Flujo

## Indice del siguiente bloque:

- 3.1 Operadores
- 3.2 Estructuras selectivas
- 3.3 Estructuras repetitivas
- 3.4 Enumeradores

## 3.1 
Operadores

Operadores Aritmeticos

- Suma, resta, división, multiplicación y Modulo

9/2 = 4 <---  La división enteros trunca cualqueir parte fraccionaria

Ejemplo con codigo:
```c
#include <stdio.h>

int main(){
    //Operadores aritmeticos

    int a = 100;
    int b = 200;
    int c;

    c = a + b;
    printf("Suma: %i\n", c)
    c = a - b;
    printf("Resta: %i\n", c)
    c = a * b;
    printf("Multiplicación: %i\n", c)
    c = a / b;
    printf("División: %i\n", c)
}
```

Luego lo compilamos en el bash:
```bash
{Tu ruta} gcc {el nombre de tu file} -o {nombre del ejecutale (si aun no tienes tu exe haz el paso de abajo.)}

{Tu ruta} {nombre de tu file para ejecución}
```

## Operadores a nivel de bits

Los operadores a nivel de bits realizan operaciones AND(&), OR(|) y OR exclusivo(^)bit a bit

Analicemos la siguiente expresión:

```c
short number1 = 15;
short number2 = 7;
short result = number1 & number2;
printf("Result: %d\n", result)
```

---> En la consola imprimira # Result: 7

¿Porqué? por las tablas de verdad

XOR: busca que sean Verdaderos en una y Falsa en otra

AND: Ambas sean verdaderas

OR: Alguna de las entradas es verdadera

    Nota: sale 7 no por los valores de las variables, ya que hay que recordar que es a nivel de Bit

    15 = 1111
    7  = 0111
    --------------
    7 = 01111

    Compara por números aqui es "&" entonces y va de derecha a izquierda, entonces la primera parte es 1 y 1 es 1, y asi 3 veces y hasta la izquierda es 1 & 0 es 0 porque es un AND y el número que nos queda en binario es 7 porque.

Operadores Lógicos a nivel de Valor

Los operadores lógicos son aquellos que permiten evaluar si una expresión es falsa o verdadera:

- AND = &&.

- OR = ||

- Negación = !

## Operadore ternario

Se trata del único operador ternario y sirve para escribir expresiones condicionales. Su sintaxis es la siguiente

````Expresion1 ? Expresion2 : Expresion3````

```c
//Operador ternario
int a = 100;
int b = 200;
int x = 1;
int y = 2;
int c;

c = a < b ? x : y

printf("Resultado ? : %i\n", c);
```

    Note: primero checas la condicional en este caso a < b si es verdadera "?" te retorna x y si es otra cosa te regresa "y"

## Precedencia de operatodres y asociatividad
