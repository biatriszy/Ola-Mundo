#include <iostream>
#include <string>
#include <Windows.h>

// <Windows.h> incluído porque irei usar uma função do windows.
// Uma função "static" significa que ela fica restringida ao arquivo em que ela foi declarada, sem "static" ela pode ser declarada em outros arquivos do projeto.

static int resulsoma(int numero1, int numero2) {

    return numero1 + numero2;
}

static int resulmul(int numero1, int numero2) {

    return numero1 * numero2;
}

static int resulsub(int numero1, int numero2) {

    if (numero2 < numero1) {

        return numero1 - numero2;
    }
    else (numero2 > numero1); {

        std::cout << "número negativo! \n";
    }
}

static double resuldivi(int numero1, int numero2) {

    if (numero2 == 0) {

        std::cout << "indivisível! \n";
    }
    else (numero2 >= 0); {

        return numero1 / numero2;
    }
}

static int usuario(int idade) {

    if (idade < 18) {

        std::cout << "você não pode prosseguir, pois é menor de idade. \n";
    }
    else (idade > 18); {
        std::cout << "você pode prosseguir. \n";
    }
    return 0;
}




int main() {

    SetConsoleOutputCP(CP_UTF8);

    std::string nome;
    int idade = 0;

    std::cout << "Olá, como se chama? ";
    std::cin >> nome;
    std::cout << "Legal, " << nome << ". Agora me diz sua idade: ";
    std::cin >> idade;
    std::cout << nome << ", " << usuario(idade);


    int numero1 = 0;
    int numero2 = 0;
    

    std::cout << "digite um número: ";
    std::cin >> numero1;
    std::cout << "digite outro número: ";
    std::cin >> numero2;
    std::cout << "\n";
    std::cout << "soma: " << resulsoma(numero1, numero2) << "\n";
    std::cout << "multiplicação: " << resulmul(numero1, numero2) << "\n";
    std::cout << "subtração: " << resulsub(numero1, numero2) << "\n";
    std::cout << "divisão: " << resuldivi(numero1, numero2) << "\n";

    return 0;

}