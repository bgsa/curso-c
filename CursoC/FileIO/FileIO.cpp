#include <iostream>

#ifdef WIN32
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
#endif

void lerArquivoTexto(const char* nome, char* conteudo, long& tamanho, long iniciandoDaPosicao = 0)
{
    FILE* file;
    fopen_s(&file, nome, "r");

    conteudo[0] = NULL;
    tamanho = 0;

    if (file != NULL && !ferror(file))
    {
        fseek(file, iniciandoDaPosicao, 0);

        long posicaoAtual = ftell(file);
        printf("Lendo arquivo da posição %ld!\n", posicaoAtual);

        while (true) 
        {
            conteudo[tamanho] = fgetc(file);

            if (feof(file))
                break;
            
            tamanho++;
        }
        conteudo[tamanho] = NULL;

        fclose(file);
    }
    else
        printf("%s", "Arquivo não encontrado ou corrompido!\n");
}

void lerArquivoBinario(const char* nome, void* conteudo, long& tamanho)
{
    FILE* file;
    fopen_s(&file, nome, "rb");

    if (file != NULL && !ferror(file))
    {
        fseek(file, 0L, SEEK_END); // (SEEK_SET para o Inicio e SEEK_CUR para posição atual)
        tamanho = ftell(file);
        fseek(file, 0L, SEEK_SET);

        fread(conteudo, 1, tamanho, file);
        fclose(file);
    }
    else
        printf("%s", "Arquivo não encontrado ou corrompido!\n");
}

void escreverArquivo(const char* nome, const void* conteudo, const long tamanho)
{
    char diretorio[FILENAME_MAX];
    GetCurrentDir(diretorio, FILENAME_MAX);

    char nomeCompleto[FILENAME_MAX];
    strcpy_s(nomeCompleto, diretorio);
    strcat_s(nomeCompleto, "\\");
    strcat_s(nomeCompleto, nome);

    FILE* file;
    fopen_s(&file, nomeCompleto, "w");

    if (file != NULL && !ferror(file))
    {
        fwrite(conteudo, 1, tamanho, file);

        if (ferror(file))
            std::cout << "Erro ao escrever no arquivo!\n";
        else
            std::cout << "Arquivo criado em: \"" << nomeCompleto << "\"\n";

        fclose(file);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese"); // usado para exibir acentuação no output da console
    std::cout << "FileIO em C\n\n";

    char conteudo[1024];
    long tamanho = 0;
    lerArquivoTexto("teste.txt", conteudo, tamanho, 10L);
    std::cout << "Conteúdo do Arquivo:\n" << conteudo << std::endl;

    // void binario[10240]; // Erro: não é possível inicializar void
    void* binario = malloc(1024000);
    lerArquivoBinario("Dynamic.pdf", binario, tamanho);
    delete binario;

    strcpy_s(conteudo, "Arquivo Temporario");
    escreverArquivo("Temp.txt", conteudo, strlen(conteudo));
}
