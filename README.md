# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

__Lo que hace el programa es tomar 3 numeros y los compara entre si mismo con mayor que y menor que para que pueda identificar cual es el mayor y cual es el menor y de esta forma que imprima en la pantalla el numero mayor. Las utilidades que yo le veo a este programa puede ser en una subasta digital que pueda tomar el numero mayor de forma automatica. ___

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. __numero1___
2. __numero2___
3. __numero3__

**Salida:**
1. _El numero mayor____

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**
___Nada mas muestra el numero mayor porque el programa nos pedia encontra el numero mayor entre 3 numeros.__

**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
___std::cin >> Utilice esta para que lea y guarde el valor en una variable__

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- __Solo son 3 numeros___
- __No pueden ser letras___

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
__no por que con las comparaciones de mayor que y menor que ya funcionan.___

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
___Imprime ese numero pues los 2 o los 3 son iguales.__

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
___Las utilerias me srve para revisar la sintaxis de los comandos o como se escriben y yo reviso lo que es el orden logico del programa.__

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
__Que va imprimir el numero mayor.___

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | __8.5___ | __2___ | _3____ | _8.5____ |
| 2 (el mayor en segunda posición) | __5___ | ___100.5__ | ___6__ | __100.5___ |
| 3 (el mayor en tercera posición) | __8___ | ___9__ | __10___ | __10___ |
| 4 (con un empate) | __8___ | _8___ | ___0__ | __8___ |
| 5 (con negativos) | __-8___ | _-5____ | ___-4__ | ___-4__ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Si
**¿Tuve que corregirla? ¿Qué cambié?** _Si, las comparaciones de los if____
**¿Cuántas versiones de mi receta escribí hasta la final?** _2____
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
_Si que el numero positivo mas alejado del 0 sea el mayor, pero use comparaciones con if porque era mas facil____

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
<Bienvenido al Programa, Escriba 3 numeros y te dire el mayor
Escribe el Numero 1: 6
Escribe el Numero 2: 5.5
Escribe el Numero 3: -9
El Numero mas alto es: 6

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida | _std::cout << "Bienvenido al Programa";____ |
| _2.- pedir un numero____ | __std::cout << "Escribe el Numero 1: " ;___ |
| __3.- guardar un numero___ | __std::cin >> numero1;___ |
| __4.-Hacer una comparacion con un if___ | ___if (numero1 > numero2 && numero1 > numero3 |
| _5.- finalizar el programa____ | _return 0;____ |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
___No estaba facil la traduccion __

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
__3 por que el programa nada mas analisa los primeros 2 y no en cadena___

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
__Mostro los numero que son mas grande __

**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
__Asigna el valor de a a b pero no los iguala, pero no me marco error___

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | ___9__ | ___si__ |
| Mayor en medio | 4, 9, 2 | 9 | _9____ | __si___ |
| Mayor al final | 2, 4, 9 | 9 | __9___ | ___si__ |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | __7___ | ___si__ |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | ___7__ | __si___ |
| Empate abajo | 8, 3, 3 | 8 | __8___ | __si___ |
| Los tres iguales | 5, 5, 5 | 5 | ___5__ | __si___ |
| Todos negativos | -4, -1, -9 | -1 | _-1____ | ___si__ |
| Con cero | -2, 0, -5 | 0 | ___0__ | __si___ |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | __2.7___ | __si___ |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | __vuelve a pedir el dato; 3___ | ___3__ |
| Caso propio 1 | __9.8, 10, 80___ | __80___ | __80___ | __si___ |
| Caso propio 2 | __100, 100.5, 200___ | ____200_ | ____200_ | __si___ |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | __Intente poner 2 else pero me dio error___ | __el if else ___ | ___si__ |
| 2 | ___El como guardar a la variale__ | ___con el std::cin__ | ___si__ |

**Reto elegido (opcional):** _____

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _Se puede usar muchas veces el else sin el if____ | ___con el if else__ |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
__A usar el if else___

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
__Simplificar los comandos que son repetitivos___

**¿Qué fue lo más difícil y cómo lo resolví?**
__Lo mas dificil es guardar los comandos con el std::cin___

**¿Qué pregunta me quedó sin responder?**
__Si se puede poner el else muchas veces ___

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
_La receta que es todo desde 0____

**¿Pensé en los empates antes de programar o los descubrí al probar?**
__Los descubri despues ___

## 14. Lista de verificación antes de entregar (Fase 5)

- [si ] Llené las secciones 1 a 13 (no quedan `___no__`)
- [si ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ si] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [si ] Mi programa compila sin advertencias
- [si ] Probé todos los casos de la tabla, incluidos los empates
- [si ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [si ] No modifiqué `utilerias.h`
- [si ] Hice al menos 3 commits con mensajes claros
- [si ] Hice `git push` y verifiqué mi fork en GitHub
- [si ] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [si ] Entregué el enlace de mi fork en Classroom