#include <iostream>
#include "Matematica.h" // inclusão do Header de matematica

int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentuação no output da console
    std::cout << "Diretivas e Headers!\n\n";

    float valor1 = 10.0f, valor2 = 20.0f;
    std::cout << "Somando com floats: " << somar(valor1, valor2) << "\n\n";

    double valorD1 = 10.0, valorD2 = 20.0;
    std::cout << "Somando com double: " << somar(valorD1, valorD2) << "\n\n";

    int valorI1 = 10, valorI2 = 20;
    std::cout << "Somando com inteiros: " << somar(valorI1, valorI2) << "\n\n";

    char valorC1 = '1', valorC2 = '2';
    std::cout << "Somando com char: " << somar(valorC1, valorC2) << "\n\n";
}

template<typename T>
T somar(T valor1, T valor2)
{
    return valor1 + valor2;
}
