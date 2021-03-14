#include <iostream>
#include "stdio.h"
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentuação no output da console
    std::cout << "Console IO em C\n\n";

    printf("%s", "Digite um caracter: ");
    int caractere = _getch();
    printf("\n%s %c\n", "Caracter digitado:", caractere);

    printf("%s %f\n", "Escrevendo um float:", 3.45f);

    printf("%s %07d\n", "Formatando Numeros com zeros:", 126);

    printf("%s\n", "Digite os 6 primeiros digitos do CPF com pontuação: ");
    int c1, c2;
    int errorCode = scanf_s("%3d%*c%3d", &c1, &c2);
}
