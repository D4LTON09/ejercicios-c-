#include <iostream>
#include <string>
#include <algorithm>

using namespace std;  // Incluir el espacio de nombres std

// Función que verifica si un número es palíndromo
bool esPalindromo(int num) {
    string s = to_string(num);
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    return s == rev_s;
}

int main() {
    int max_palindromo = 0;

    // Recorrer todos los productos de dos números de 3 dígitos
    for (int i = 999; i >= 100; --i) {
        for (int j = i; j >= 100; --j) {
            int producto = i * j;
            // Verificar si el producto es palíndromo y mayor que el máximo actual
            if (esPalindromo(producto) && producto > max_palindromo) {
                max_palindromo = producto;
            }
        }
    }

    // Imprimir el mayor palíndromo encontrado
    cout << "El mayor palíndromo hecho del producto de dos números de 3 dígitos es: " << max_palindromo << endl;

    return 0;
}