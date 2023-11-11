#include<string>
#include <vector>
#include "reservation.h"
#include<iostream>
using namespace std;

//string student::studentFN(){

int reservation::createReservation(int seatNumin, int carNumin, string nameIn) //return pin number
{
	seatNum = seatNumin;
	carNum = carNumin;
	name = nameIn;
	return
}

void reservaton::modifyReservation(int seatNum, int carNum){
	seatNum = seatNumin;
	carNum = carNumin;
}
void reservation::printReservation(){

}
int reservation::getSeatNum(){
	return seatNum;
}
int reservation::getcarNum(){
	return carNum;
}
string reservation::getName(){
	return name;
}