#include <iostream>
using namespace std;

int main() {
    int A[3][5], Soma_Linha[3] = {0};

    cout << "Digite os elementos da matriz A[3][5]:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            cin >> A[i][j];

    for (int i = 0; i < 3; i++){
         for (int j = 0; j < 5; j++){
            Soma_Linha[i] += A[i][j];
         }  
    }
       
    cout << "Vetor Soma_Linha:\n";
    for (int i = 0; i < 3; i++)
        cout << Soma_Linha[i] << " ";
    cout << endl;

    return 0;
}