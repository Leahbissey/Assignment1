#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
        double third = (1/3) * hitPoints;
        int thirdreal = (int)  floor(third);  
        double ignore = (rand() % thirdreal) + 2; 
        double damage = hitPoints - ignore; 
        return damage; 

}
