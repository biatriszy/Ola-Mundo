#include <iostream>
#include <string>

int main() {

  std::string nome;

    std::cout << "como voce se chama? \n";
    std::cin >> nome;
    std::cout << "Ola, " << nome << "! \n";
 
  int idade = 0;

    std::cout << nome << ", qual sua idade? \n";
    std::cin >> idade;
    std::cout << "Prazer lhe conhecer, " << nome << "! \n";

    // dica de boa prática!
    // usar "std::" ao invés de "using namespace std" no cabeçalho ajuda a evitar conflitos com nomes de funções ou variáveis que serão criadas futuramente.

    return 0;
} 