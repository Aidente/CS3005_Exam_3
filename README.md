# CS3005_Exam_3

# Parking Lot Management System

## Overview

The program is in C++. It simulates a parking lot system.
Allows users to park cars, remove cars, check if a lot is taken or not and charge a hourly rate.

The parking lot has 50 spots numbered between 0 and 49. The parking fee is $5 per hour.

## Features

Park a car into a available spot.
Remove a car from a spot.
Calculate cost of parking based on hours the car was parked.
View the current status of the lot.

## Files

main.cpp: Contains the main program and menu.
ParkingLot.h: Declaration of ParkingLot class.
ParkingLot.cpp: Implementation of ParkingLot class.
Spot.h: Declaration of Spot class.
Spot.cpp: Implementation of Spot class.
Makefile: Compiles and links the program.

## C++ Features

std::vector
The ParkingLot class has a vector containing Spot objects which are used to represent each parking space. This vector can be set to any size with the constructor and then iterated through to show the parking lot.
Pass by reference (const int&, ostream&, const Spot&).
cin, cout.
While and for loops.

## Compilation

Run:
make

## Executing

Once compiled run:
./parkingLot

## Menu

1. Park car
2. Remove car
3. View parking lot
4. Exit

## Clean

To delete the object files and executable run:
make clean