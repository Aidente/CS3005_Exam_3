#pragma once
#include "Spot.h"
#include <vector>
#include <iostream>


class ParkingLot{
    private:
        int cost;

        std::vector<Spot> lot;

    public:
        ParkingLot( const int& numSpots, const int& cost );

        bool park(int spotNum);
        int remove(int spotNum, int hours);
        void show(std::ostream& os) const;
        
};
