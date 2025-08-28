#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    cout << "Digite 5 números inteiros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }
    cout << "Números em ordem inversa:" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << endl;
    }
    return 0;
}