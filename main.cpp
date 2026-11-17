#include <iostream>
#include <limits>
#include "ParkingLot.h"

int main()
{
    int numSpots = 50;
    int cost = 5;

    ParkingLot lot(numSpots, cost);

    int choice = 0;

    do
    {
        std::cout << "\n===== Parking Lot Menu =====\n";
        std::cout << "1. Park a car\n";
        std::cout << "2. Remove a car\n";
        std::cout << "3. Show parking lot\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        if (choice == 1)
        {
            int spotNum;

            std::cout << "Enter spot number: ";
            std::cin >> spotNum;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid spot number.\n";
                continue;
            }

            if (lot.park(spotNum))
            {
                std::cout << "Car successfully parked!\n";
            }
            else
            {
                std::cout << "Unable to park. Spot may be occupied or invalid.\n";
            }
        }
        else if (choice == 2)
        {
            int spotNum;
            int hours;

            std::cout << "Enter spot number: ";
            std::cin >> spotNum;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid spot number.\n";
                continue;
            }

            std::cout << "Enter hours parked: ";
            std::cin >> hours;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid number of hours.\n";
                continue;
            }

            int charge = lot.remove(spotNum, hours);

            if (charge < 0)
            {
                std::cout << "Unable to remove car. Check the spot number and hours.\n";
            }
            else
            {
                std::cout << "Parking charge: $" << charge << '\n';
            }
        }
        else if (choice == 3)
        {
            lot.show(std::cout);
        }
        else if (choice == 4)
        {
            std::cout << "Exiting parking lot system.\n";
        }
        else
        {
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}