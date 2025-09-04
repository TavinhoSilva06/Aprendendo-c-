#include <iostream>

using namespace std;
 
int C(float celsius, float fahrenheit) {

    float CE = celsius = (fahrenheit - 32) * 5/9;

    return CE;

}
 
int F(float fahrenheit, float celsius) {

     float FAH = fahrenheit = (celsius * 9/5) + 32;

     return FAH;

}
 
int main(int argc, char** argv)

{

    int x, y;

    cout<<"Digite dois valores: ";

    cin >>x>>y;

    cout<<C(x, y)<<"\n";

     cout<<F(y, x)<<"\n";
 
    return 0;

}