#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Digite dois números: ";
    cin >> x >> y;
    if (x > y)
        cout << "O maior número é: " << x << endl;
    else
        cout << "O maior número é: " << y << endl;
    return 0;
}