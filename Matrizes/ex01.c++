#include <iostream>
using namespace std;

int main() {
    int matriz[4][4], soma = 0;

    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
            if (i == j) {
                soma += matriz[i][j]; 
            }
        }
    }

    cout << "Soma da diagonal principal: " << soma << endl;
    return 0;
}