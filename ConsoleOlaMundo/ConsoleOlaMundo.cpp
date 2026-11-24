#include <iostream>
#include <string>
#include <Windows.h>

// <Windows.h> incluído porque irei usar uma função do windows.

int main() {

    SetConsoleOutputCP(CP_UTF8);

// SetConsoleOutputCP(CP_UTF8); faz o console interpretar a saída em em UTF-8, fazendo com que as palavras acentuadas apareçam corretamente.

  std::string nome;

    std::cout << "como você se chama? \n";
    std::cin >> nome;
    std::cout << "Olá, " << nome << "!";
 
  int idade = 0;

    std::cout << " Qual sua idade? \n";
    std::cin >> idade;
    std::cout << "Prazer lhe conhecer, " << nome << "! \n";

    // dica de boa prática!
    // usar "std::" ao invés de "using namespace std" no cabeçalho ajuda a evitar conflitos com nomes de funções ou variáveis que serão criadas futuramente.

  int numero1 = 0;
  int numero2 = 0;

    std::cout << nome << ", digite um número: ";
    std::cin >> numero1;
    std::cout << nome << ", digite outro número: ";
    std::cin >> numero2;

  int adicao = numero1 + numero2;
  int mult = numero1 * numero2;

    std::cout << "a adição dos números " << numero1 << " e " << numero2 << " é: " << adicao << "\n";
    std::cout << "a multiplicação dos números " << numero1 << " e " << numero2 << " é: " << mult << "\n";

    return 0;
} 