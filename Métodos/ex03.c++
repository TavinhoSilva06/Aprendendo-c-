#include <iostream>
using namespace std;
 
int ehPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
 
int main() {
    int numero;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;
 
    int resultado = ehPrimo(numero);
    if (resultado == 1)
        cout << numero << " é primo." << endl;
    else
        cout << numero << " não é primo." << endl;
 
    return 0;
}