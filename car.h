#ifndef car_header
#define car_header
#include<string>
#include <vector>
#include "student.h"
using namespace std;

class Car {
	private:
		vector<bool> seatsFilled;
		vector<student> seatRoster;
		string carType;
		string carColor;
	public:
		Car(int seatNum, string typeIn, string colorIn);
		bool CheckSeats(); //Returns seat vector
		bool FillSeat(int seatNum); //Fills seat and returns operation sucsess
		void EmptySeat(int seatNum);//Empties seat
		void PrintAssignments(); //Prints Passenger list
};

#endif