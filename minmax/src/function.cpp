//PASSOU NOS TESTES

#include "function.h"

std::pair<int,int> min_max( int V[], size_t n )

{
    
    if(n == 0) return std::make_pair(-1, -1);

    int Num_menor = V[0]; 
    int Num_maior = V[0]; 

    std::size_t LowI = 0;
    std::size_t HighI = 0;
    std::size_t i;

    for(i =0 ; i < n; i++) 
    {
        if(V[i] < Num_menor) 
        {  
            Num_menor = V[i];
            LowI = i;
        }
        
        if(V[i] >= Num_maior) 
        { 
            Num_maior = V[i];
            highI = i;
        } 
    }
    
    return std::make_pair(LowI, highI); 
}