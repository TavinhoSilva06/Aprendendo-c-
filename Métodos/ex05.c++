#include <iostream>
using namespace std;
 
float multiplicar(float a, float b) {
    return a * b;
}
 
float somar(float a, float b) {
    return a + b;
}
 
float dividir(float a, float b) {
    if (b == 0) {
        cout << "Erro: divisão por zero!" << endl;
        return 0;
    }
    return a / b;
}
 
float subtrair(float a, float b) {
    return a - b;
}
 
int main() {
    float x, y;
    int opcao;
 
    cout << "Digite dois valores: ";
    cin >> x >> y;
 
    do {
        cout << "\nMenu de opções:\n";
        cout << "1 - Multiplicação\n";
        cout << "2 - Adição\n";
        cout << "3 - Divisão\n";
        cout << "4 - Subtração\n";
        cout << "5 - Fim\n";
        cout << "Escolha: ";
        cin >> opcao;
 
        switch (opcao) {
            case 1: cout << "Resultado: " << multiplicar(x, y) << endl; break;
            case 2: cout << "Resultado: " << somar(x, y) << endl; break;
            case 3: cout << "Resultado: " << dividir(x, y) << endl; break;
            case 4: cout << "Resultado: " << subtrair(x, y) << endl; break;
            case 5: cout << "Encerrando..." << endl; break;
            default: cout << "Opção inválida!" << endl;
        }
    } while (opcao != 5);
 
    return 0;
}