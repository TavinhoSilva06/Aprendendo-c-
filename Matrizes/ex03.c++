#include <iostream>
using namespace std;

int main() {
    int matriz[2][3], transposta[3][2];

    cout << "Digite os elementos da matriz 2x3:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> matriz[i][j];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            transposta[j][i] = matriz[i][j];

    cout << "Matriz transposta 3x2:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            cout << transposta[i][j] << " ";
        cout << endl;
    }

    return 0;
}