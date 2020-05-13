#pragma once
namespace corsim
{

class ALockdownMovementStrategy : public MovementStrategy
{
    public:
        double move(double i,double di,double dt){return i + di * dt * 0;};
};

};