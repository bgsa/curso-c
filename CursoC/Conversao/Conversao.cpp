#include <iostream>

int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentuação no output da console

    int valor = 1;
    char caractere = 'c';

    std::cout << "Valor: " << valor << std::endl;

    valor = caractere;

    std::cout << "Valor: " << valor << std::endl;

    valor++;
    std::cout << "Valor: " << valor << std::endl;

    caractere = valor;
    std::cout << "Caractere: " << caractere << std::endl;


    float f = 10.0f;
    double d = 20.0;

    d = f;
    d++;
    f = d; // warning do compilador

    valor = f; // warning do compilador
    valor = (int)f; // quero apenas a parte inteira do float

    valor = 122;
    f = valor;

    valor = static_cast<int>(f);

    char* valorQualquer = reinterpret_cast<char*>(valor);

    // const_cast   // apenas para remover a constante da variável/objeto
    // ver Exemplo abaixo em C++
}

class Exemplo
{
    int a = 1;

    void executar() const
    {
        // a = 3; // erro porque o método é constante

        Exemplo* novoExemplo = const_cast<Exemplo*>(this);
        novoExemplo->a = 3; // agora OK !
    }

};