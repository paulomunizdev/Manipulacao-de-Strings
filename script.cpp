#include <iostream>
#include <string>

int main() {
    // Exemplo 1: Declaração e Inicialização de Strings
    std::string saudacao = "Hello";
    std::string complemento(" World");

    // Exemplo 2: Concatenação de Strings
    std::string mensagem = saudacao + complemento;
    std::cout << "Mensagem Concatenada: " << mensagem << std::endl;

    // Exemplo 3: Tamanho da String
    std::cout << "Tamanho da Mensagem: " << mensagem.length() << " caracteres" << std::endl;

    // Exemplo 4: Acesso a Caracteres Individuais
    char primeiroCaracter = mensagem[0];
    std::cout << "Primeiro Caracter: " << primeiroCaracter << std::endl;

    // Exemplo 5: Modificação de Caracteres
    mensagem[5] = '!';
    std::cout << "Mensagem Modificada: " << mensagem << std::endl;

    // Exemplo 6: Comparação de Strings
    std::string outraMensagem = "Hello World";
    if (mensagem == outraMensagem) {
        std::cout << "As mensagens são iguais." << std::endl;
    } else {
        std::cout << "As mensagens são diferentes." << std::endl;
    }

    // Exemplo 7: Encontrar Substring
    size_t posicao = mensagem.find("World");
    if (posicao != std::string::npos) {
        std::cout << "Substring 'World' encontrada na posição: " << posicao << std::endl;
    } else {
        std::cout << "Substring não encontrada." << std::endl;
    }

    // Exemplo 8: Substring
    std::string parteDaMensagem = mensagem.substr(6, 5);
    std::cout << "Parte da Mensagem extraída: " << parteDaMensagem << std::endl;

    return 0;
}
