#include "subject.h"
#pragma once
namespace corsim
{
    
class MovementStrategy
{
    public:
        MovementStrategy(){};
        virtual double move(double i,double di,double dt) = 0;

};

};