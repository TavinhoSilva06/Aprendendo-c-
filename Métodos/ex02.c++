#include <iostream>
using namespace std;
 
int quadrado(int x) {
    return x * x;
}
 
int soma(int a, int b) {
    return a + b;
}
 
int somaDosQuadrados(int x, int y) {
    return soma(quadrado(x), quadrado(y));
}
 
int main() {
    int num1, num2;
    cout << "Digite dois números: ";
    cin >> num1 >> num2;
 
    int resultado = somaDosQuadrados(num1, num2);
    cout << "Soma dos quadrados: " << resultado << endl;
 
    return 0;
}