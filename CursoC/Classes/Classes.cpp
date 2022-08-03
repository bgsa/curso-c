#include <iostream>
#include "Aluno.h"

// using namespace EscolaXPTO;

int main()
{
    std::cout << "Classes em C++!\n\n";

    std::cout << "Aluno A\n";
    EscolaXPTO::Aluno a;
    a.imprimir();

    // a.membro // erro, pois membro é privado por default
    // a.nome // erro, pois nome é protegido

    std::cout << "Aluno B\n";
    EscolaXPTO::Aluno b(2, "Bruno Gallego");
    b.imprimir();

    std::cout << "Aluno C\n";
    EscolaXPTO::Aluno* c = new EscolaXPTO::Aluno(3, "Desenvolvedor");
    c->imprimir();
    delete c; 

    // observar a ordem dos destrutores
}
