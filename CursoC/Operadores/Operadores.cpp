#include <iostream>

int main()
{
    // incremento prefixo e sufixo

    int i = 1;
    std::cout << "i: " << i << std::endl;

    i++;
    std::cout << "i: " << i << std::endl;

    i++;
    std::cout << "i: " << i << std::endl;

    std::cout << "i: " << i++ << std::endl;

    std::cout << "i: " << ++i << std::endl;

    i--;
    std::cout << "i: " << i << std::endl;

    i = i - 1;
    std::cout << "i: " << i << std::endl;

    i -= 2;
    std::cout << "i: " << i << std::endl;

    // multiplicando e dividindo
    i = i * 2;
    std::cout << "i: " << i << std::endl;

    i = i / 2; 
    // i /= 2;
    std::cout << "i: " << i << std::endl;

    // multiplicando e dividindo com operadores bit a bit
    i = i << 1;
    std::cout << "i: " << i << std::endl;

    i = i >> 1;
    // i >>= 1;
    std::cout << "i: " << i << std::endl;

    i = ~i; // confira na calculadora bin�ria



    // operadores l�gicos
    bool ehVerdade = (1 == 1);
    ehVerdade = (1 == 2);

    if (1 != 2) // ou  if (ehVerdade2)
    {
        std::cout << "1 � diferente de 2 !" << std::endl;
    }
    else
    {
        std::cout << "1 � igual a 2 !" << std::endl;
    }

    ehVerdade = (1 != 1) && (3 + 1 == 4);

    ehVerdade = (1 != 1) || (3 + 1 == 4);

    ehVerdade = (1 > 1);

    ehVerdade = (1 >= 1);

    ehVerdade = 1 < 2;

    ehVerdade = !(1 < 2);

    // DIFEREN�A entre (& e &&) e (| e ||) para operadores l�gicos

    // operador :: para resolu��o de namespace Ex.: std::cout

    // operador sizeof
    int muitosInteiros[10];
    std::cout << "Size de Muitos Inteiros: " << sizeof(muitosInteiros) << std::endl;

    std::cout << "Size de String: " << sizeof(std::string) << std::endl;

    // operadores C++
    //Classe A = new Classe();
    //delete A;

}