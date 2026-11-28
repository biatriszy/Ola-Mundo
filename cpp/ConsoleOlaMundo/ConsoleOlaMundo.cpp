// CIFRA DE CÉSAR

#include <iostream>
#include <string>
#include <windows.h>

char cifrarletra (char letra, int chave) {
	
	int posição = letra - 'A';
	int nposicao = posição + chave;



	return 'A';
}



int main() {

	using namespace std;
	SetConsoleOutputCP(CP_UTF8);

	char chave;
	string letra;

	cout << "Programa de criptografia de textos. \n";
	cout << "Letra: \n";
	getline(cin, letra);
	cout << "Chave: \n";
	cin >> chave;








	return 0;
}