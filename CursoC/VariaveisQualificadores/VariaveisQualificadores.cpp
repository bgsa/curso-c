#include <iostream>


// escopo global
int global = 1;
const int contanteGlobal = 1; // global com qualificador
static int contadorGlobal = 1; // global com especificador de armazenamento

int funcao()
{
    int local = 3;

    contadorGlobal = contadorGlobal + 1;

    return local;
}

int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentuação no output da console

    std::cout << "Constante Global: " << contanteGlobal << std::endl;

    std::cout << "Contador: " << contadorGlobal << std::endl;

    // escopo local
    int local = 2;
    std::cout << "Local: " << local << std::endl;

    std::cout << "Funcao: " << funcao() << std::endl;

    local = local + 1;

    std::cout << "Local: " << local << std::endl;

    std::cout << "Contador: " << contadorGlobal << std::endl;

    // contanteGlobal++; // erro! declarada como constante

    register char registradorX = 'A';
    std::cout << "Variável provavelmente no registrador: " << registradorX << std::endl;

    extern int globalExterno;
    std::cout << "Global Externo: " << globalExterno << std::endl;

    auto tipoAutomatico = 10.0;
    std::cout << "Tipo Auto: " << tipoAutomatico << std::endl;



    std::cout << "FIM !";
}

int globalExterno = 4;