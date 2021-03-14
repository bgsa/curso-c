#include <iostream>

enum Curso
{
    Computacao = 1,
    Matematica = 2,
    Direito = 3
};

struct Aluno
{
    int matricula;
    char nome[30];
    int idade;
    Curso curso;

    // estruturas do tipo Union -> geralmente usado com um discriminador (tipo de aluno/ouvinte)
    union
    {
        float nota;
        int presencas;
    };

} aluno1, aluno2;

typedef Aluno Ouvinte;
typedef int Inteiro;
typedef float Real;
typedef float Decimal;

void preencherIdade1(Aluno aluno, int idade)
{
    aluno.idade = idade;
}

void preencherIdade2(Aluno& aluno, int idade)
{
    aluno.idade = idade;
}

void preencherIdade3(Aluno* aluno, int idade)
{
    aluno->idade = idade;
}



int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentuação no output da console
    std::cout << "Estruturas\n\n";

    aluno1.matricula = 1;
    aluno2.matricula = 2;

    size_t tamanhoDaEstrutura = sizeof(Aluno);

    Aluno novoAluno;
    novoAluno.matricula = 3;
    preencherIdade3(&novoAluno, 5);
    preencherIdade2(novoAluno, 6);
    preencherIdade1(novoAluno, 7);

    novoAluno.curso = Curso::Matematica;

    aluno1 = novoAluno; // copia de estrutura

    Aluno* turma = new Aluno[10];
    turma[0].matricula = 01;
    turma[1].matricula = 02;

    Ouvinte alunoOuvinte;
    alunoOuvinte.matricula = 100;

    Inteiro idade = 25;
    alunoOuvinte.idade = idade;

    alunoOuvinte.presencas = 6;
    novoAluno.nota = 4.0f;
}
