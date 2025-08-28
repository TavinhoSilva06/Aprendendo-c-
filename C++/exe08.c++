#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um número inteiro positivo: ";
    cin >> n;
    unsigned long long fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }
    cout << "Fatorial de " << n << " é " << fatorial << endl;
    return 0;
}