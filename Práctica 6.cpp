#include <iostream>
#include <vector>

int main() {
    // Crear un vector de enteros
    std::vector<int> numeros = { 1, 2, 3, 4, 5 };

    // Mostrar los elementos iniciales
    std::cout << "Elementos iniciales del vector: ";
    for (int numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    // Insertar nuevos elementos en el vector
    numeros.push_back(6); // Inserta al final del vector
    numeros.insert(numeros.begin(), 0); // Inserta al inicio del vector
    numeros.insert(numeros.begin() + 3, 10); // Inserta en la posición 3

    // Mostrar los elementos despues de las inserciones
    std::cout << "Elementos despues de las inserciones: ";
    for (int numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    return 0;
}