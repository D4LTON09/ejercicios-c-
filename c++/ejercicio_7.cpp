#include <iostream>
#include <cmath>

using namespace std;

// Función que verifica si un número es primo
bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int contador = 0;
    int numero = 1;
    int prime_10001 = 0;

    // Continuar hasta encontrar el primo número 10,001
    while (contador < 10001) {
        ++numero;
        if (esPrimo(numero)) {
            ++contador;
            prime_10001 = numero;
        }
    }

    // Imprimir el resultado
    cout << "El primo número 10,001 es: " << prime_10001 << endl;

    return 0;
}
