#include <iostream>
#include <random>
using namespace std;

int main() {
	int dif, chances,chute;

inicio:
	cout << "Bem vindo ao Jogo de Advinhacao de numeros!!" << endl;
	cout << "Estou pensando em um numero entre 1 e 100" << endl;
	cout << endl;
	cout << endl;
	cout << "Por favor, escolha a dificuldade do jogo: " << endl;
	cout << "1. Facil (10 chances)" << endl;
	cout << "2. Medio (5 chances)" << endl;
	cout << "3. Dificil (3 chances)" << endl;	
	
	cout << "Escreva sua escolha: ";
	cin >> dif;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	if (dif == 1) {

		chances = 10;
		cout << "Voce escolheu o modo facil" << endl;
		cout << "Voce tem " << chances << " chances" << endl;
		cout << "Vamos inciar o jogo!!!" << endl;

	}
	else if (dif == 2) {
		chances = 5;
		cout << "Voce escolheu o modo Medio" << endl;
		cout << "Voce tem " << chances << " chances" << endl;
		cout << "Vamos inciar o jogo!!!" << endl;
	}
	else if (dif == 3) {
		chances = 3;
		cout << "Voce escolheu o modo Dificil" << endl;
		cout << "Voce tem " << chances << " chances" << endl;
		cout << "Vamos inciar o jogo!!!" << endl;
	}

	else {
		cout << "Opcao invalida. Escolha apenas as opcoes listadas." << endl;
		goto inicio;
	}
	int numeroaleatorio = (rand() % 100) + 1; // gerei fora do loop, porque se não a cada "chute" iria mudar o numero
	while (chances > 0) {

		cout << "De o seu Chute: " << endl;
		cin >> chute;

		if (chute < numeroaleatorio) {
			cout << "Incorreto! O numero escolhido e maior que " << chute << endl;
			chances = chances - 1;
		}
		else if (chute > numeroaleatorio) {
			cout << "Incorreto! O numero escolhido e menor que " << chute << endl;
			chances = chances - 1;
		}
		else {
			cout << "Parabens! Voce advinhou o numero correto em " << chances << " tentativas";
			break;
		}
		if (chances == 0) {
			cout << endl;
			cout << "----------" << endl;
			cout << "Acabaram suas chances :(" << endl;
		}
	}


	return 0;
}