#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3;
    cout << "Digite três notas: ";
    cin >> nota1 >> nota2 >> nota3;
    float media = (nota1 + nota2 + nota3) / 3;
    cout << "Média aritmética: " << media << endl;
    return 0;
}