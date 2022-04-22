//PASSOU NOS TESTES

#include "function.h"

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
  location_t loc = location_t::extremidade;

  if(P.x < IE.x || P.x > SD.x || P.y < IE.y || P.y > SD.y)
{
    loc = location_t::fora;

  } 
else if(P.x > IE.x && P.x < SD.x && P.y > IE.y && P.y < SD.y)
{
    loc = location_t::dentro;
  }
  return loc;
}