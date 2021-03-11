#include <iostream>

float notaGlobal = 0.0f;

int somar(int a, int b);

int quadrado(int a)
{
    a = a * a;

    return a;
}

void quadrado(void)
{
    notaGlobal = notaGlobal * notaGlobal;
}

char caractere(const char* texto, int indice)
{
    return texto[indice];
}

void caractere(const char* texto, int indice, char& resultado)
{
    resultado = texto[indice];
    indice = 9999;
}

// referencia com ponteiro
void caractere(const char* texto, int indice, char* resultado)
{
    *resultado = texto[indice];
    indice = 9999;
}

// Fatorial com Recurs�o
int fatorial(int valor)
{
    if (valor == 1) // prote��o/guarda da recurs�o
        return valor;

    return valor * fatorial(valor - 1);
}

int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentua��o no output da console
    std::cout << "Fun��o\n\n";

    int a;
    int b;
    int resultado;

    std::cout << "Valor 1: \n";
    std::cin >> a;

    std::cout << "Valor 2: \n";
    std::cin >> b;

    resultado = somar(a, b);

    std::cout << "Resultado da soma: " << resultado << std::endl;

    
    std::cout << "O quadrado do valor 1 �: " << quadrado(a) << std::endl;

    char texto[100] = "Bruno Gallego";
    char letra = caractere(texto, 2);
    std::cout << "A letra no �ndice 2 �: " << letra << std::endl;

    caractere("Bruno Gallego", 4, letra);
    std::cout << "A letra no �ndice 4 �: " << letra << std::endl;

    caractere(texto, 6, &letra);
    std::cout << "A letra no �ndice 6 �: " << letra << std::endl;


    std::cout << "A nota global �: " << notaGlobal << std::endl;
    quadrado();
    std::cout << "O quadrado da nota global �: " << notaGlobal << std::endl;
    quadrado(); 
    quadrado();
    std::cout << "O quadrado da nota global �: " << notaGlobal << std::endl;

    float notaGlobal = 1.0f;
    std::cout << "A nota global �: " << notaGlobal << std::endl;


    std::cout << "O fatorial de 5 �: " << fatorial(5) << std::endl;
}

int somar(int a, int b)
{
    return a + b;
}