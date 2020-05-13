#pragma once
namespace corsim
{

class BLockdownMovementStrategy : public MovementStrategy
{
    public:
        double move(double i,double di,double dt){return i + di * (dt/10);};
};

};