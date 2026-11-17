all: parkingLot

main.o: main.cpp ParkingLot.h
	g++ -c main.cpp

ParkingLot.o: ParkingLot.cpp ParkingLot.h Spot.h
	g++ -c ParkingLot.cpp

Spot.o: Spot.cpp Spot.h
	g++ -c Spot.cpp

parkingLot: main.o ParkingLot.o Spot.o
	g++ -o parkingLot main.o ParkingLot.o Spot.o

clean:
	rm -f main.o ParkingLot.o Spot.o parkingLot