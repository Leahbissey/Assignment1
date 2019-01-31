#include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
{
    double damange; 
   if(armor >= 30) 
     damage = hitPoints - armor; 
   
   if(damage < 0) 
      return 0; 

   return damage; 
}
