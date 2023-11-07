#include<string>
#include <vector>
#include "student.h"
#include<iostream>
using namespace std;




string student::studentFN(){
    return firstName;
}

void student::setStudent(string fn, string ln, int cr){
    firstName = fn;
    lastName = ln;
    credits = cr;
}

int student::displayCredits(){ 
    return credits;
}
string student::displayName(string fn, string ln){
    string space = " ";
    string fullname;
    //cout << "First name is " << fn << "Last name is " << ln << endl;
    fullname = fn + space + ln;
    return fullname;
}