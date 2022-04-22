#ifndef FUNCTION_H
#define FUNCTION_H
#include <array>
using std::array;

#include <string>
using std::string;


struct PT {
    int x; 
    
    int z; 
    
    PT( int xi=0, int zi=0 ) : x{xi}, z{zi}
    {}
};


enum location_t :int { dentro=0, extremidade=1, fora=2 };

location_t pt_in_rect( const PT&, const PT&, const PT& );

#endif