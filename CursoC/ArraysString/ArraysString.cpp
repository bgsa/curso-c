#include <iostream>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentuação no output da console
    std::cout << "Arrays e Strings" << std::endl;

    // notas dos alunos
    float n[5] = { 6.5f, 8.0f, 4.0f, 8.5f, 2.0f };
    n[0] = 6.5f;
    n[1] = 8.0f;
    n[2] = 4.0f;
    n[3] = 8.5f;
    n[3] = 2.0f;


    int qtdAlunos;
    std::cout << "Quantidade de Alunos: " << std::endl;
    std::cin >> qtdAlunos;

    float* notas = (float*)malloc(sizeof(float) * qtdAlunos);
    //float* notas = new float[qtdAlunos];

    char** alunos = (char**)malloc(sizeof(char) * qtdAlunos);

    // EXPLICAÇÃO NO QUADRO BRANCO
    
    for (int i = 0 ; i < qtdAlunos; i++)
    {
        std::cout << "Nome do Aluno " << i << std::endl;
        alunos[i] = new char[200];
        std::cin >> alunos[i];

        std::cout << "Nota do Aluno " << i << std::endl;
        std::cin >> notas[i];
    }

    for (int i = 0; i < qtdAlunos; i++)
    {
        std::cout << "Aluno " << i << std::endl;
        std::cout << alunos[i] << std::endl;
        std::cout << notas[i] << std::endl;

        delete alunos[i];
    }
    delete notas;

    // STRINGS ...
    std::cout << "Trabalhando com Strings " << std::endl;

    char str[50] = "Bruno Gallego";
    // char* str2 = "Bruno";  // erro pois "Bruno" é uma constante de char. Vamos Corrigir!


    std::cout << "Contando Elementos na String" << std::endl;
    int length = 50;
    length = strlen(str);
    int contador = 0;

    for (int i = 0; i < length; i++)
        if (str[i] == 'l')
            contador++;

    std::cout << "Encontradas " << contador << " ocorrências da letra 'l' no texto \"" << str << "\"" << std::endl;


    std::cout << std::endl << "Visualizando Caracteres Especiais" << std::endl;
    std::cout << std::endl << "\bIniciando Paragrafo com \'Tabulação\' e nova linha no final\n";
    std::cout << "Atenção! Tem alguém dormindo\? (alerta sonoro) \a";

    std::cout << std::endl << "Manipulando Strings" << std::endl;

    int index = 0;
    for (; index < length; index++)
        if (str[index] == ' ')
            break;


    str[index] = NULL;
    str[index] = '\0';
    str[index] = '_';

    char sobrenome[50];
    strcpy(sobrenome, &str[index + 1]);

    if (strcmp(sobrenome, "Gallego"))
        std::cout << "Sobrenome correto!" << std::endl;

    char* sobrenome2 = strchr(str, 'G');

    char complemento[100] = " ensina C e C++.";
    strcat(str, complemento);
    
    // SPLITTING strings
    char* pch = strtok(str, " ");
    while (pch != NULL)
    {
        std::cout << pch << std::endl;
        pch = strtok(NULL, " ");
    }

}
