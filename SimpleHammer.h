/*
* File: SimpleHammer.h
* Author: Leah Bissey
*
*/

#include <string>
#include "Weapon.h" 

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavoir of a simple hammer (hit points = 25, if 
 * armour is less than 30, hammer will ignore all the armor points)
*/

class SimpleHammer : public Weapon {
public: 
     SimpleHammer() : Weapon("Simple Hammer", 25.0) //Calls Weapon(name, hitpoints) constructor
     {
     }

     virtual ~ SimpleHammer() {};
 
    virtual double hit(double armor); 
};

#endif 
