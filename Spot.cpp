#include "Spot.h"

Spot::Spot()
{
    parked = false;
}
bool Spot::isParked() const
{
    return parked;
}
bool Spot::park()
{
    if (parked){
        return false;
    }
    else{
        parked = true;
        return true;
    }
}
bool Spot::remove()
{
    if (parked){
        parked = false;
        return true;
    }
    else{
        return false;
    }
}
