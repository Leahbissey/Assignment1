/*
*File: SillySword.h
*Author: Leah Bissey
*/


#include <string>
#include "Weapon.h"

#ifndef SILLYSWORD_H
#define SILLYSWORD_H


/**
 * Defines the behavior of a Silly Weapon (hit point = 15, if 
 * armor points is an even number, ignore 50% of armor point, if odd ignore 70%
*/

class SillySword : public Weapon {
public: 

    SillySword() : Weapon("Silly Sword", 15.0) { //Calls Weapon(name, hitpoints)
    }

   virtual ~SillySword() {}; 
 
    virtual double hit(double armor); 

}; 

#endif 
