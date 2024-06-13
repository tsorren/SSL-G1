## 1. 
 gcc -Wall -g -std=c23 -pedantic-errors main.c tabla.c conversion.c -o exec.exe

## 2.
tabla.c: In function 'mostrarTabla': 
 tabla.c:48:15: error: implicit declaration of function 'convertirNudosKmH' [-Wimplicit-function-declaration]
   48 |         kmh = convertirNudosKmH(nudos);
      |               ^~~~~~

Este error indica que se está intentando utilizar una función que no está declarada, ya que al eliminar el include "conversion.h" de tabla.c, el prototipo de la función convertirNudosKmH ya no existe, entonces el compilador asume que la función está declarada implícitamente, y por ello tira error.
El error ocurre durante la compilación en la fase de análisis semántico, donde el compilador verifica que todas las funciones utilizadas en el código estén declaradas o prototipadas antes de su uso.

## 3.
C:/msys64/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/14.1.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\user\AppData\Local\Temp\ccUp8Tm2.o:main.c:(.text+0xf1): undefined reference to `mostrarTabla'
collect2.exe: error: ld returned 1 exit status

Este error indica que el vinculador no puede encontrar la referencia a la función "mostrarTabla", por ello dice que tiene referencia indefinida, al intentar vincular los archivos objeto para crear el programa ejecutable final. Como resultado, retorna un estado de salida (exit status) de 1.

## 4.
El comando utilizado fue:
 gcc -Wall -c -std=c23 -pedantic-errors -E conversion.c -o conversion.i