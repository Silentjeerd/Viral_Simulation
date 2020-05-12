#pragma once
namespace corsim
{

class LockdownMovementStrategy : public MovementStrategy
{
    public:
        LockdownMovementStrategy(){};
        double move(double i,double di,double dt);
};

};