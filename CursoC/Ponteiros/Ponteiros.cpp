#include <iostream>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentuação no output da console
    std::cout << "Ponteiros" << std::endl << std::endl;

    int valor = 10;
    std::cout << "Valor: " << valor << std::endl;

    int* valores = new int[5];
    std::cout << "Valores: " << valores << std::endl;
    std::cout << "Valor[0]: " << valores[0] << std::endl;
    std::cout << "Valor[1]: " << valores[1] << std::endl;
    valores[1] = 2;
    std::cout << "Valor[1]: " << valores[1] << std::endl;
    std::cout << "Valor[2]: " << valores[2] << std::endl;

    int* apontoParaValor = &valor;
    std::cout << "Ponteiro para Valor: " << apontoParaValor << std::endl;
    std::cout << "O Ponteiro está apontando para: " << *apontoParaValor << std::endl;



    int** ponteiroDePointeiros = new int*[3];
    ponteiroDePointeiros[0] = new int[5];
    ponteiroDePointeiros[1] = new int[10];
    ponteiroDePointeiros[2] = (int*)calloc(3, sizeof(int));

    ponteiroDePointeiros[0][0] = 3;
    ponteiroDePointeiros[0][4] = 10;

    ponteiroDePointeiros[1][1] = 2;

    ponteiroDePointeiros[2][0] = 1;
    


    int** novoPonteiroDePointeiros = (int**)realloc(*ponteiroDePointeiros, sizeof(int*) * 2); // realocando

    delete[] novoPonteiroDePointeiros;

    void* ponteiroParaAlgo = malloc(sizeof(int) * 3);
    ((int*)ponteiroParaAlgo)[0] = 5;
    ((float*)ponteiroParaAlgo)[1] = 3.4f;
    ((long*)ponteiroParaAlgo)[2] = 7L;


    free(ponteiroParaAlgo);
}
