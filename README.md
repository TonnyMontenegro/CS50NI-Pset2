# CS50Xni Pset 2: Crypto

Implementar:

-   <a href="#Caesar" class="btn btn-sm btn-default">Caesar</a>
-    <a href="#Vigenère" class="btn btn-sm btn-default">Vigenère</a>


<h2 id="Caesar">Caesar</h2>

Implementa un programa que cifre mensajes usando el cifrado Caesar, para obtener lo siguiente:

```
$ ./caesar 13
plaintext:  HELLO
ciphertext: URYYB
```

### Especificaciones

Diseñe e implemente un programa,  `caesar`, que cifre mensajes usando el cifrado Caesar.

-   Implemente su programa en un archivo llamado  `caesar.c`  en una carpeta llamado  `caesar`  dentro de la carpeta  `pset2`.
    
-   Su programa debe aceptar un solo argumento de línea de comando, un entero no-negativo. Llamémosle  _k_.
    
-   Si su programa se ejecuta sin un argumento en la línea de comando o con más de uno, su programa debe imprimir un mensaje de error de su elección (con  `printf`) y retorne desde el  `main`  el valor de  `1`  (el cual significa que hubo un error) inmediatamente.
    
-   Asuma que si el usuario provee un argumento en la línea de comando, este será un número no-negativo (Ejemplo,  `1`). No hay necesidad de comprobar que es de hecho ese número.
    
-   No asuma que  _k_  será menor o igual que 26. Su programa debe funcionar para todos los valores integrales no-negativos de  _k_  menor que 231  - 26. En otras palabras, no necesitas preocuparte si tu programa eventualmente se rompe si el usuario escoge un valor para  _k_  que sea demasiado grande o casi tan grande para que quepa en un  `int`. (Recordemos que un  `int`  puede desbordarse). Pero, aunque  _k_  sea más grande que 26, los caracteres alfabeticos en la entrada del programa deben permanecer como caracteres alfabeticos en la salida del mismo. Por lo tanto, si  _k_  es 27,  `A`  no debe convertirse  `[`  aunque  `[`  está a 27 posiciones de  `A`  en código  [ASCII](http://www.asciichart.com/);  `A`  debe convertirse en  `B`, ya que  `B`  está a 27 posiciones lejos de  `A`, siempre que envuelva de  `Z`  hasta  `A`.
    
-   Su programa debe dar de salida  `plaintext:`  (sin salto de línea) y luego solicitar al usuario un  `string`  de texto plano (usando  `get_string(NULL)`).
    
-   Su programa debe dar de salida  `ciphertext:`  (sin salto de línea) seguido de el texto cifrado correspondiente al texto plano, con cada carácter alfabético “rotado” po  _k_  posiciones; caracteres no-alfabéticos deben ser impresos sin cambios.
    
-   Tu programa debe mantener las mayúsculas, a pesar de haber sido rotadas, deben permanecer en mayúsculas. Y las minúsculas, a pesar de haber sido rotadas, deben de permanecer en minúsculas
    
-   Después de generar la salida, debes imprimir un salto de línea. Y para finalizar, tu programa debe salir con código  `0`  de la función  `main`.


<h2 id="Vigenère">Vigenère</h2>

Implementa un programa que cifre mensajes usando el cifrado Vigenère’s , para obtener lo siguiente:

```
$ ./vigenere ABC
plaintext:  HELLO
ciphertext: HFNLP
```

### Especificaciones

Diseñe e implemente un programa que cifre mensajes usando el cifrado Vigenère.

-   Implementa tu programa en un archivo llamado  `vigenere.c`  archivo en una carpeta llamada  `vigenere`  en el directorio  `pset2`.
    
-   Tu programa debe aceptar un solo argumento en la ventana de comandos: una palabra clave  _k_, compuesta enteramente por caracteres alfabéticos
    
-   Si tu programa se ejecuta sin un argumento en la ventana de comandos, con más de un argumento, o con un argumento que contenga un carácter no-alfabético, tu programa debe imprimir un mensaje de error (de tu elección) y salir inmediatamente, retornando  `1`  de la función  `main`
    
-   Si no se cumple lo anterior, tu programa deberá solicitar al usuario una cadena de texto plano,  _p_, (A Través de un mensaje que diga  `plaintext` que luego debe cifrar con el cifrado Vigenère con  _k_, imprimiendo finalmente el resultado (añadiendo el texto cifrado después de el mensaje  `ciphertext`:, y por último un salto de línea ) y luego salir, retornando  `0`  de la función  `main`.
    
-   Con respecto a los caracteres en  _k_, debe tratar a  `A`  y  `a`  como 0,  `B`  y  `b`  como 1, …, y  `Z`  y  `z`  como 25.
    
-   Su programa debe aplicar el cifrado Vigenère a un carácter en  _p_  si ese carácter es una letra. Todos los demás caracteres (números, símbolos, espacios, signos de puntuación, etc) deben imprimirse sin cambios. Además, si su código está apunto de aplicar el carácter_jth_  de  _k_  al carácter  _ith_  en  _p_, pero este último demuestra ser un carácter no-alfabético, debe esperar a aplicar ese carácter  _jth_  de  _k_  al siguiente carácter en  _p_; aún no debes avanzar al siguiente carácter en  _k_.
    
-   Tu programa debe mantener las mayúsculas y minúsculas de cada letra en  _p_.
