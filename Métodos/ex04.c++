#include <iostream>
using namespace std;
 
int ehBissexto(int ano) {
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
        return 1;
    else
        return 0;
}
 
int main() {
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;
 
    if (ehBissexto(ano))
        cout << ano << " é bissexto." << endl;
    else
        cout << ano << " não é bissexto." << endl;
 
    return 0;
}