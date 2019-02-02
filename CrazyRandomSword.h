/*
 * File: CrazyRandomSword.h
 *Author: Leah Bissey
 *
*/
#include <cmath>
#include<ctime>
#include <cstdlib>
#include <string> 
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 *  Defines behavior of crazy random sword (hit point is random, ignores
 * a random amount of armor points. 
 *
*/

class CrazyRandomSword : public Weapon
{
public: 

     CrazyRandomSword() : Weapon("Crazy Sword", 30.0)
    {
         
    }

     virtual ~CrazyRandomSword() {}; 
 
     virtual double hit(double armor); 
}; 

#endif
