//PASSOU NOS TESTES

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(){

    int range1, range2, range3, range4, range5;
    int x, i;
    range1 = range2 = range3 = range4 = range5 = 0;


    while (cin >> std::ws >> x)
    {
	
        if (x > 0 && x < 25){range1++;}
        else if(x > 25 && x < 50){range2++;}
        else if(x > 50 && x < 75){range3++;}
        else if(x > 75 && x < 100){range4++;}
        else{range5++;}
	i++;
    }



    cout << setprecision(4) << (range1*100.0)/static_cast<double>(i) <<endl;
  cout << setprecision(4) << (range2*100.0)/(i) <<endl;
  cout << setprecision(4) << (range3*100.0)/(i) <<endl;
  cout << setprecision(4) << (range4*100.0)/(i) <<endl;
   cout << setprecision(4) << (range5*100.0)/(i) <<endl;
    return 0;

}