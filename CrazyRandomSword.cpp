#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{        
        double damage;
        double third = (1.0/3.0) * armor;
        int thirdint = (int)  floor(third);
        if(thirdint != 0)  
        {
         double ignore = (rand() % thirdint) + 2; 
         damage = hitPoints - ignore;}
       else 
          damage = hitPoints; 
       if(damage < 0) 
         return 0;  
        return damage; 

}
