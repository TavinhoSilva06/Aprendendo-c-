#include <iostream>
using namespace std;

int main() {
    int matriz[5][5];

    cout << "Digite os elementos da matriz 5x5:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
        } 
    }

    cout << "Matriz completa:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        cout << endl;
        } 
    }

    cout << "Elementos em posições onde linha + coluna é ímpar:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i + j) % 2 != 0) {
                cout << matriz[i][j] << " ";
            }  
        }
    }
    cout << endl;

    return 0;
}