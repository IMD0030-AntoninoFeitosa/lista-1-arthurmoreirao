//PASSOU NOS TESTES

#include "function.h"


location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )

{
    
    if((IE).x < (P).x && (P).x < (SD).x && (IE).y < (P).y && (P).y < (SD).y) return dentro;
    else if ((P).x == (SD).x && (P).y >= (IE).y && (P).y <= (SD).y) return extremidade;
    
    else if ((P).x == (IE).x && (P).y >= (IE).y && (P).y <= (SD).y) return extremidade;

    else if ((P).y == (SD).y && (P).x >= (IE).x && (P).x <= (SD).x) return extremidade;
    
    else if ((P).y == (IE).y && (P).x >= (IE).x && (P).x <= (SD).x) return extremidade;
    
    else return fora;
}