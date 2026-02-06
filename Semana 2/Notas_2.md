### ScanF
- Escaneas el formato (es como un input)
- Formato los formatos son patrones.

### Tipos de Datos

Float - Decimal
char - Character
int - entero



las comillas simples y las dobles aquí si afectan, comillas simples en char es un solo caracter alfanumerico, y doble comilla es como si fuera un string.

Partes de una variable:

nombre- Var1 - Nombre
Valor- 150 - lo llamas con el nombre
referencia de memoria - 0x592 - lo llamas con el nombre mas el &

ejemplo

```
var = 150
&var = 0x2435

```

### Sistema OP

El sistema operativo son gestores de recursos del hardware, el sistema operativo es el que se encarga de traer la memoria, en general los recursos.

### Inicializar las variables

Las variables cuando se inicializan sin valor si inicializan con memoria por eso es importante "Apartar" la memoria de ciertas variables para no dejarle a la suerte si habra espacio para esa variable

### Comando para compilar

``` bash

# {RutaDeTuFolder}> gcc -c primer_programa.c

```

----> Esto genera un archivo Compilado ".o", y sirve para cachar errores, y ver si tus librerias funciona.

NOTA: DLL (Dinamic Library) si te da un error de DLL es que te falta una libreria en tu biblioteca.

``` bash
#{RutaDeTuFolder}> gcc -o primerprograma.c 
```

el -o funciona Output (Donde quieres el resultado)

---> si usas el comando 

```
gcc --help
```

te dara las opaciones de como usas el gcc con tus archivos

## PreProcesamiento

El preprocesamiento es el proceso mediante el cual se "prepara" el código fuente antes de ser traducido a código binario. Las instrucciones (también llamadas "directivas")

Variables para el preprocesado

```c++
#include <stdio.h>
#define B 1
#ifndef C // ifndef es si no esta definida
#else // puedes dirigirte a una versión del código o a otra con las condicionales
```

-- Código especifico para 32 bits o amdx86 para hacerlo correr mejor en  los procesadores

ejemplo

```c++
#include <stdio.h>
#ifndef AMDx86


int main(){

    printf("");
    return 0;
}


#else

int main(){
    return 0
}
```
el ifndef sirve para no tener que definir las variables cada vez que compiles el código entonces escribes si no esta definida x variable definela pero si ya esta definida solo corre el programa


Una Macro es una especie de mini funcion, son pequeñas instrucciones o procesamientos rápidos ejemplo

```c++
#define SameZoneIds (z1,z2) ((z1[0] == z2[2]))
```

## Compilador

Se trata del proceso de "Traducir" el programa de c a binario

## Enlace

Cada que se compila correctamente el enlazado es agarralos empaquetalos y diles que entre ellos se conecten para correr el programa (como ir por las librerias, tus otros archivos etc.)
-------

# 2. Elementos del lenguaje C


## Identificadores

Un identificador es la IDentidad de esa sección de memoria puedes ser variable o una función

¿De que se compone un identificador? son characteres alfanumericos y NO puede llevar palabras reservadas por el programa, no puede llevar tampoco ponerle un número al principio pero si puede llevarlos despues del primer character


## Palabras reservadas

Las palabras reservadas son las keyWords que se usan en los lenguajes de programación una keyword seria como print, continue, while. Básicamente son palabras que hacen instrucciones dentro del programa, estas palabras tampoco se pueden usar para variables y/o identificadores.

## Variables

En C una variable es una posición con nombre en memoria donde se almacena un valor de un cierto tipo de dato. Las variables pueden almacenar todo tipo de datos: cadenas, números, etc.

```
#AQUI VA EL CODIGO DE LA SEMANA 2 "tiposdedatos.c"
```

### Char de fin de memoria

// "Gamaliel" --> a la derecha aunque no se vea hay un char invisible entonces si lo vemos en memoria seria algo asi "Gamaliel\0" 

### Variables

Los tipos básicas de variables con C son:
- Variables locales
- Variables globales
- Variables dinámicas

Dependiendo del lugar donde se definan las variables en c, éstas se pueden utilizar en la totalidad del programa, dentro de una función o pueden existir sólo temporalmente dentro de un bloque de una función. La zona de un programa en la que una variable está activa se denomina, normalmente, ámbito o alcance ("scope").

Diferencia de variable dinámica: las variables tienen 3 tipos de datos como ya pusimos antes, la diferencia es que las dinámicas en lugar del valor, almacenan apuntadores, osea guardan la dirección de memoria de alguna otra variable.

Variable global: Es una variable que es visible y puede ser accedidas por todas las funciones de mi programa

Variable loca: es una variable que solo es visible y puede ser accedida dentro de la función y muere cuando la función acaba.


### Tipos de datos primitivos en C

Cada Variable que se declara en un programa tiene un tipo asociado. Cada tipo requiere diferente cantidad de memoria y existen distintaas operaciones que se pueden ejecutar sobre estos:

algunos tipos de datos en C más comunes son:

- char: el tipo de dato más utilizado. Almacena un solo caracter y requiere de 1 solo byte de memoria.
- int: Como su nombre sugiere, se utiliza para almacenar un número entero. Requiere de 4 bytes de memoria
- float: Utilizado para almacenar números decimales con doble presición. Requiere de 8 bytes de memoria.


### obtener el tamaño de un dato

A veces conviene saber cuanto espacio en la memoria están utilizando las variables que hemos declarado, para ello podemos utilizar la función sizeof()

Char = 1 byte ? 8bits = 0000 0101 = 5

```c
int value_1;
int value_2;

scanf("%d%d", &value_1, &value_2);
printf("Value 1: %d, value 2: %d\n ", value_1, value_2);
printf("Size of %d: %u bytes\n", value_1, sizeof(value_1));
```

## Modificadores: const, short, long, unasigned

¿Qué son los modificadores o "qualifiers"?

Se trata de palabras clave (keywords) que son aplicados a los tipos de datos en C. Existen tres tipos:
1. Modificadores de tamaño.
2. Modificadores de signo.
3. Modificadores de tipo

```c
long value_1; // en vez de long también puede ser short
double value_2;

scanf("%d%d", &value_1, &value_2);
printf("Value 1: %d, value 2: %d\n ", value_1, value_2);
printf("Size of %d: %u bytes\n", value_1, sizeof(value_1));
```

Que hacen?:

Modificadores de tamaño

short: limita los bits a la mitad para ahorrar espacio
long: aumenta el entero al doble de bits
double: aumenta el flotante al doble de bits

Modificadores de Signo:

unsigned int: te ahorra el signo (sirve para los char y para los int)
static: hace los 3 elementos permantentes
const: hace el valor de una variable constante

Modificadores de Tipo:

