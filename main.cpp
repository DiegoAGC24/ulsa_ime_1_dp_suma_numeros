#include <iostream>

int main() {
    const int CANTIDAD = 5;

    double suma = 0.0;
    double numero = 0.0;
    int contador = 0;

    std::cout << "Suma de " << CANTIDAD << " numeros\n";

    while (contador < CANTIDAD) {
        std::cout << "Ingresa el numero " << (contador + 1) << ": ";
        std::cin >> numero;

        suma += numero;
        contador++;
    }

    std::cout << "Suma: " << suma << "\n";

    return 0;
}