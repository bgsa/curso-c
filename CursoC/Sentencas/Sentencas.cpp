#include <iostream>
#include<conio.h>

int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentuação no output da console

    int nota;

    std::cout << "Entre com a nota: " << std::endl;
    std::cin >> nota;

    if (nota > 10)
        std::cout << "Valor inválido!" << std::endl;
    else
    {
        std::cout << "Nota: " << nota << std::endl;
    }

    char nomeAluno[100];
    int nomeAlunoContador = 0;

    std::cout << "Entre com o nome: " << std::endl;
    char caractere;
    do
    {
        caractere = _getch();

        std::cout << caractere;

        nomeAluno[nomeAlunoContador++] = caractere;

    } while ((int)caractere != 13); // 12 = enter no Windows '\r'

    nomeAluno[nomeAlunoContador - 1] = '\0'; // remove o '\r' e coloca finalização de string NULL ou '\0'

    std::cout << "Nome: " << nomeAluno << std::endl;



    // contandor
    unsigned int contador = 0;
    while (contador < 10)
    {
        contador++;
        std::cout << "Contador: " << contador << std::endl;
    }
    std::cout << "Resultado Final do Contador: " << contador << std::endl;

    // contador com FOR
    for (contador = 0; contador < 10; contador++)
        std::cout << "Contador: " << contador << std::endl;

    std::cout << "Resultado Final do Contador: " << contador << std::endl;

    // exibindo pares de 0-9
    for (contador = 0; contador < 10; contador++)
        if (contador % 2 == 0)
            std::cout << "Contador é par: " << contador << std::endl;


    std::cout << "Exibindo pares de 0-9 com switch" << std::endl;
    for (contador = 0; contador < 10; contador++)
    {
        switch (contador)
        {
        case 2:
            std::cout << "Contador é par: " << contador << std::endl;
            break;
        case 4:
            std::cout << "Contador é par: " << contador << std::endl;
            break;
        case 6:
            std::cout << "Contador é par: " << contador << std::endl;
            break;
        case 8:
            std::cout << "Contador é par: " << contador << std::endl;
            break;

        default:
            break;
        }
    }
   

faca_novamente:
    std::cout << "Digite um número a ser pesquisado: " << std::endl;
    int numero;
    std::cin >> numero;
    for (contador = 0; contador < 10; contador++)
    {
        if (contador == numero)
            break;
        else
        {
            continue;
        }

        std::cout << "Verificando número: " << contador << std::endl;
    }

    std::cout << "Deseja pesquisar novamente [s] ou [n]: " << std::endl;
    char caracter;
    std::cin >> caracter;

    if (caractere == 's')
        goto faca_novamente;



    std::cout << "IF '?' ternário: " << std::endl;
    bool verificado = 10 > 5 ? true : false;
}