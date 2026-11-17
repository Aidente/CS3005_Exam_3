#pragma once

class Spot
{
    private:
        bool parked;

    public:
        Spot();
        bool isParked() const;
        bool park();
        bool remove();

};