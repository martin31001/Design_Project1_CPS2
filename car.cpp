#include "car.h"
#include "student.h"
#include <string>
#include <vector>

using namespace std;

Car::car(int seatNum, string typeIn, string colorIn){
	student tempStudent;
	for(i = 0; i<seatNum; i++){
		seatsFilled.pushback(false);
		seatsFilled.pushback(tempStudent);
	}
	seatsFilled.at(0) = true;
	carType = typeIn;
	carColor = colorIn;
}

bool Car::CheckSeat(int seatNum){
	return seatsFilled.at(seatNum-1);
}

bool Car::FillSeat(student studentIn){
	
	


	if(!seatsFilled.at(seatNum-1)){
		seatsFilled.at(seatNum-1) = true;
		seatsFilled.at(seatNum - 1) = studentIn;
		return true;
	}
	else{
		return false;
	}
}
void 
void Car::EmptySeat(int seatNum){

}
