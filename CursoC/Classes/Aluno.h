#include <iostream>

#ifndef ALUNO_HEADER
#define ALUNO_HEADER

namespace EscolaXPTO
{
	class Aluno
	{
		int membro;

	private:
		int matricula;
		
	protected:
		char* nome;

	public:

		/// <summary>
		/// Construtor padrão
		/// </summary>
		Aluno()
		{
			matricula = 0;
			nome = nullptr;
		}

		/// <summary>
		/// Construtor com parametros
		/// </summary>
		/// <param name="nome"></param>
		Aluno(int matricula, const char* nome)
		{
			this->nome = new char[strlen(nome)];
			std::memcpy(this->nome, nome, sizeof(char) * strlen(nome));
		}

		void imprimir();
		
		/// <summary>
		/// Destrutor
		/// </summary>
		~Aluno()
		{
			if (nome != nullptr)
			{
				delete nome;
				nome = nullptr;
			}

			matricula = 0;
		}

	};
}


#endif // ALUNO_HEADER


