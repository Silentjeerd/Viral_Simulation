
#pragma once
namespace corsim
{
    
class MovementStrategy
{
    public:
        virtual double move(double i,double di,double dt) = 0;
};

};