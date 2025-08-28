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
    cout << "Escolha uma opção: ";
    cin >> opcao;

    cout << "Digite dois números: ";
    cin >> a >> b;

    switch (opcao) {
        case 1:
            cout << "Resultado da soma: " << a + b << endl;
            break;
        case 2:
            cout << "Resultado da subtração: " << a - b << endl;
            break;
        case 3:
            cout << "Resultado da multiplicação: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Resultado da divisão: " << a / b << endl;
            else
                cout << "Não é possível dividir por zero." << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
    }

    return 0;
}