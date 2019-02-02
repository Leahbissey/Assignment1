#include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
{
    double damage;    
   if(armor >= 30) 
      damage = hitPoints - armor; 
   else 
      damage = hitPoints;  
   if(damage < 0) 
      return 0; 

   return damage; 
}
