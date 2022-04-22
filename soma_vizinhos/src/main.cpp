//PASSOU NOS TESTES

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const int neg = -1;
const int ZERO = 0;
int main(){

    int n, m, i;
    int total;
    int prox;
    prox=0;

    i=0;
    cin >> m;
    cin >> n;

    total =m;

    int abs;
    
    if (n<ZERO)
    {
        abs = n * neg;
    }
    else{
        abs= n;
    }
    

    while (i<abs)
    {
        if (n>ZERO)
    {
        total =total + prox;
        m++;
        prox = m;
        i++;
    }
    else if (n<ZERO){
        total = total + prox;
        m--;
        prox=m;
        i++;

    }
    }

    
    cout << total << endl;
    
    



    
    return 0;

}