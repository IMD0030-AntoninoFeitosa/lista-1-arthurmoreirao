//PASSOU NOS TESTES

#include <iostream>
#include <array>

template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{

  int tam = arr.size();


  for(int i=0;i<tam/2;i++){

    std::swap(arr[i], arr[tam-i-1]);

  }
}
