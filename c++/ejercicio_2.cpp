#include <iostream>
#include <string>

int main() {
    // Inicializar los primeros dos términos de la secuencia de Fibonacci
    int fib1 = 1, fib2 = 2;
    int even_sum = 0;
    std::string fibonacci_chain = "1, 2";  // Inicia la cadena con los primeros dos términos

    // Generar la secuencia de Fibonacci y formar la cadena
    while (fib2 <= 4000000) {
        if (fib2 % 2 == 0) {
            even_sum += fib2;
        }

        // Generar el siguiente término de Fibonacci
        int next_fib = fib1 + fib2;
        if (next_fib > 4000000) {
            break; // Si el siguiente término excede cuatro millones, se detiene
        }

        // Actualizar los términos de Fibonacci
        fib1 = fib2;
        fib2 = next_fib;

        // Agregar el nuevo término a la cadena
        fibonacci_chain += ", " + std::to_string(fib2);
    }

    // Imprimir la cadena de números de Fibonacci
    std::cout << "Cadena de Fibonacci: " << fibonacci_chain << std::endl;
    // Imprimir la suma de los términos pares
    std::cout << "Suma de los términos pares: " << even_sum << std::endl;

    return 0;
}
