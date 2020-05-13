#pragma once
namespace corsim
{
    
class RegularMovementStrategy : public MovementStrategy
{
    public:
        double move(double i,double di,double dt){return i + di * dt;};
};

};