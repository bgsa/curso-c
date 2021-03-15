// #pragma once  <- muito espec�fico do compilador MSVS

#ifndef MATEMATICA_HEADER
#define MATEMATICA_HEADER

#ifndef __cplusplus
	#error "Compilador deve suportar C++"
#endif

#define ABS(valor) (valor < 0.0 ? -valor : valor)
// para quebrar em linhas, use \\

template<typename T>
T somar(T valor1, T valor2);
//int somar(int valor1, int valor2);
//short somar(short valor1, short valor2);
//float somar(float valor1, float valor2);
//double somar(double valor1, double valor2);
//char somar(char valor1, char valor2);


// template especializado
template<>
char somar(char valor1, char valor2)
{
	std::cout << "Ocorreu erro na linha" << __LINE__ << " do arquivo " << __FILE__ << ".\n";

	//return '0';
	return NULL;
}

inline float multiplicar(float valor1, float valor2)
{
	return ABS(valor1) * ABS(valor2);
}

// __DATE__ -> data da compila��o
// __TIME__ -> hora da compila��o
// __STDC__    -> define se � compilador C
// __cplusplus -> define se � compilador C++


#endif // MATEMATICA_HEADER

