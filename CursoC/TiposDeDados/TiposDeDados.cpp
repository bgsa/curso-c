#include <iostream>
#include <climits>

int main()
{
    // Tipos padrão ANSI C
    char c = 'v';
    unsigned char uc = 'C';
    signed char sc = '1';

    int i = 1;
    unsigned int ui = 2;
    signed int si = 3;

    short s = 3;
    short int shi = 4;
    unsigned short int ushi = 4;
    signed short int sshi = 4;

    long int li = 5;
    long l = 5;
    unsigned long int uli = 5;
    signed long int sli = 5;

    float f = 1.0f;
    double d = 2.0;

    long double ld = 3.0;


    char char_max = std::numeric_limits<char>().max();
    char char_min = CHAR_MIN;

    int int_max = INT_MAX;
    int int_min = INT_MIN;

    int16_t int_min16 = INT16_MIN;
    int16_t int_max16 = INT16_MAX;

    int16_t int_max16_plus = int_max16 + 1; // exemplo de overflow numérico

    // Tipos padrão C++
    bool b = true;
    std::string str = "Hi!";
    
    // Tipo String em C
    char str2[4] = "Hi!"; // observe 3 caracteres e string de 4 (terminator)

    std::cout << "Hello World!\n";
}