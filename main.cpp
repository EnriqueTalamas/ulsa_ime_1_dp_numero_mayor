// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {
double numero1;
double numero2;
double numero3;
std::cout << "Bienvenido al Programa, Escriba 3 numeros y te dire el mayor"   << std::endl;
std::cout << "Escribe el Numero 1: " ;
std::cin >> numero1;
std::cout << "Escribe el Numero 2: " ;
std::cin >> numero2;
std::cout << "Escribe el Numero 3: " ;
std::cin >> numero3;

if (numero1 >= numero2 && numero1 >= numero3) {
    std::cout << "El Numero mas alto es: " << (numero1) << std::endl;
} else if (numero2 >= numero1 && numero2>= numero3) {
     std::cout << "El Numero mas alto es: " << (numero2) << std::endl;
} else if (numero3 >= numero1 && numero3 >= numero2) { 
     std::cout << "El Numero mas alto es: " << (numero3) << std::endl;
}

    // Variables (siempre inicializadas)
    // TODO: ¿cuántas necesitas? ¿De qué tipo? ¿Necesitas alguna además de los tres números?

    // Paso 1: mensaje de bienvenida
    // TODO

    // TODO: el resto de tu receta, paso por paso.
    //       ¿Tu decisión necesita una cadena if / else if / else o varios if independientes?
    //       ¿Qué pasa con tu código si dos números son iguales?

    // ¿Qué significa return 0;?
    return 0;
}