//PASSOU NOS TESTES

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <algorithm>
using std::min;
using std::max;

#include "function.h"

int main(void)
{
  int ex1, ex2, ex3, ex4, x, y;
    while(cin >> ex1 >> ex2 >> ex3 >> ex4 >> x >> y)
    
    {
      if(ex1 != ex3 || ex2 != ex4)
      {
        PT p (x,y);
        PT ie (ex1, ex2);
        PT sd (ex3, ex4);
        location_t loc;
        if(ex1 <= ex3 && ex2 <= ex4){
          loc = pt_in_rect(ie, sd, p);
        } else {
          loc = pt_in_rect(ie, sd, p);
        }
        switch(loc){
          case location_t::fora: cout << "outside" << endl; break;

          case location_t::dentro: cout << "inside" << endl; break;

          case location_t::extremidade: cout << "border" << endl; break;
          
        }
      } else {
        cout << "invalid" << endl;
      }
    }

    return 0;
}
