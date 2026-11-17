#include "ParkingLot.h"

ParkingLot::ParkingLot(const int& numSpots, const int& cost)
{
    this->cost = cost;
    lot.resize(numSpots);
}

bool ParkingLot::park(int spotNum)
{
    if (spotNum < 0 || spotNum >= lot.size()){
        return false;
    }
    return lot[spotNum].park();
}
int ParkingLot::remove(int spotNum, int hours)
{
    if (spotNum < 0 || spotNum >= lot.size()){
        return 0;
    }
    if (hours <= 0){
        return 0;
    }
    bool check = lot[spotNum].remove();
    if (check){
        return (cost * hours);
    }
    else{
        return 0;
    }
}
void ParkingLot::show(std::ostream& os) const
{
    int i = 0;
    for (const Spot& spot : lot)
    {
        if (spot.isParked())
        {
            os << i << " Taken ";
        }
        else
        {
            os << i << " Empty ";
        }
        i ++;
        if (i % 10 == 0){
            os << "\n";
        }
    }
}