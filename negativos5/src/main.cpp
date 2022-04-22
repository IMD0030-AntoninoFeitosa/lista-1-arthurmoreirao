//PASSOU NOS TESTES

#include <iostream>

using std::cin;
using std::cout;

const int SIZE = 5;
const int ZERO = 0;
const int ADC= 1;

int main(){
{
    int x = 0;
    int y; 
    int saida=0;

    while (x < SIZE)
    {
        cin >> std:ws y;
        if (y < ZERO)
        {
            saida = ADC + saida;
        }
        x = x+ADC;
    }
    
    cout << saida << endl;

    
    return 0;

}