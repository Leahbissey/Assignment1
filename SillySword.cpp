#include "SillySword.h"

double SillySword::hit(double armor)
{
  int arm = (int) armor; 
   double damage; 
   if(arm % 2 == 0) 
      damage = hitPoints - (.5*arm); 
   else
    damage = hitPoints - (.3 * arm); 

   if(damage < 0)
     return 0;  

   return damage;     




}
