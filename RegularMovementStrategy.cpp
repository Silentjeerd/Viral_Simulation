#include "subject.h"
#include "MovementStrategy.h"
#include "RegularMovementStrategy.h"

namespace corsim
{
    RegularMovementStrategy::RegularMovementStrategy(){

    }

    double move(double i,double di,double dt){
        return i + di * dt;
    }
}