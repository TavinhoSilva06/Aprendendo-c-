#include <iostream>
using namespace std;

int main() {
    int matriz[6][6];
    long long produto = 1;

    cout << "Digite os elementos da matriz 6x6:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
             cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            produto *= matriz[i][j];
        }
    }

    cout << "Produto dos elementos abaixo da diagonal principal: " << produto << endl;
    return 0;
}