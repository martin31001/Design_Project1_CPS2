#ifndef reservation_header
#define reservation_header
#include <iomanip>
#include <iostream>
#include <iomanip>
#include "Student.h"
#include "Car.h"
#include "Reservation.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class reservation{
	private:

	string nameIn;
	int pin;
	int seatNum;
	int carNum;
	
	public:
	reservation();
	int createReservation(string nameIn); //return PIN number
	void modifyReservation(); //vector of reservations in main (search by name in main)
	void printReservation();
	int 
	string
		

}