#include <iostream>
using namespace std;

int main() {
	int opcao;
	float a, b;

	cout << "Menu de operações:" << endl;
	cout << "1 - Somar dois números" << endl;
	cout << "2 - Subtrair dois números" << endl;
	cout << "3 - Multiplicar dois números" << endl;
	cout << "4 - Dividir dois números" << endl;
	cout << "Escolha uma opçãoo: ";
	cin >> opcao;

	switch (opcao) {
	case 1:
		cout << "Digite dois números: ";
		cin >> a >> b;

		cout << "Resultado da soma: " << a + b << endl;
		break;
	case 2:
		cout << "Digite dois números: ";
		cin >> a >> b;

		cout << "Resultado da subtração: " << a - b << endl;
		break;
	case 3:
		cout << "Digite dois números: ";
		cin >> a >> b;

		cout << "Resultado da multiplicação: " << a * b << endl;
		break;
	case 4:
		cout << "Digite dois números: ";
		cin >> a >> b;

		if (b != 0)
			cout << "Resultado da divisC#o: " << a / b << endl;
		else
			cout << "Não é possível dividir por zero." << endl;
		break;
	default:
		cout << "Opção inválida." << endl;
	}

	return 0;
}