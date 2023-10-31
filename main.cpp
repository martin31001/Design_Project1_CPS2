#include <iomanip>
#include <iostream>
#include <iomanip>
#include "Student.h"
#include "Car.h"
#include "Reservation.h"
#include <vector>
#include <fstream>

using namespace std;
ifstream OpenInputFile();

int main() {
    //vector<student> stud_vec;
    //ifstream playerlist = OpenInputFile(); //opens input file into object
    string stFirstName;
    string stLastName;
    string stPoints;
    int selection = -2;
    bool quit = false;
//    while (playerlist.good()) { // loops until all of the in file has been read
//        playerlist >> stFirstName >> stLastName >> stPoints;
//        Song tempplayer(stFirstName, stLastName, stPoints); //take in three arguments then creates a temp object to add to vector
//        stud_vec.push_back(tempplayer);
//    }
    while (!(selection == -1)) { //loops until exit command has been given
        selection = -2;
        cout << "Reservation System Menu : " << endl;
        cout << setw(10) << "( " << "0 )  " << ": Create Reservation";
        cout << setw(10) << "( " << "1 )  " << ": Change Reservation";
        cout << setw(10) << "( " << "2 )  " << ": Cancel Reservation";
        cout << setw(10) << "( " << "3 )  " << ": Display Reservations";
        cout << setw(10) << "( " << "4 )  " << ": Print Reservations";
        cout << setw(10) << " ( "<<"-1 )  " <<": QUIT" <<endl; //provides exit option
        cout << "Select => ";
        cin >> selection;
        cout << endl;

        switch(selection){
            case 0: //create a reservation
                //displayVehicles();
                string fName;
                cout << "Enter your first name: ";
                cin >> fName;
                bool checkName = false;
                for(int i = 0; i < stud_vec)
                break;

        }


    }
    return 0;
}
//ifstream OpenInputFile()
//{
//    string inFileName = "";
//    ifstream temp;
//
//    temp.open(inFileName.c_str());
//
//    if (!temp.is_open()) { //checks to see if file opened correctly
//        cout << "\nUnsuccessfully... Program Terminated\n" << endl;
//        exit(1);
//    }
//    return (temp);
//}