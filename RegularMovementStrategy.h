#pragma once
namespace corsim
{
    
class RegularMovementStrategy : public MovementStrategy
{
    public:
        RegularMovementStrategy(){};
        double move(double i,double di,double dt);
};

};