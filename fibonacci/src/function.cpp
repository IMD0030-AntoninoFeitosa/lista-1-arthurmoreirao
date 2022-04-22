//PASSOU NOS TESTES

#include "function.h"

std::vector<unsigned int> cii_below_n( unsigned int n )

const int um = 1;
const int dois= 2;
const int ZERO = 0;

{
    
    vector<unsigned int> cii;

    unsigned int x; 
    int i;
    i=0;          
    bool ciiBaixo = true;

    while(ciiBaixo) {

        
        if(i == ZERO || i == um) {
            if(n > 1) cii.push_back(1); 
            
            else return cii; 
        } 
        //
        else {  
            x = cii[i-um] + cii[i-dois];

            if(x < n) cii.push_back(x);

            else ciiBaixo = false;
        }
        i++;
    }

    return cii;
}
