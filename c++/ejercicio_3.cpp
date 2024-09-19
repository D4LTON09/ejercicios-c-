#include <iostream>

long long largest_prime_factor(long long n) {
    long long factor = 2;
    // Dividir por el menor factor posible
    while (n % factor == 0) {
        n /= factor;
    }

    // Probar con números impares desde 3 en adelante
    factor = 3;
    while (factor * factor <= n) {
        while (n % factor == 0) {
            n /= factor;
        }
        factor += 2;
    }

    // Si n es mayor que 2, es un factor primo mayor
    if (n > 2) {
        return n;
    } else {
        return factor - 2;  // Regresa el último factor probado
    }
}

int main() {
    long long number = 600851475143;
    std::cout << "El mayor factor primo es: " << largest_prime_factor(number) << std::endl;
    return 0;
}