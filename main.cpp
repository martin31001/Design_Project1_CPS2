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
void displayVehicles(vector<car> carin) const; 
int main() {
    vector<student> stud_vec;
    student tempplayer;
    //vector<car> car_vec;
    ifstream playerlist = OpenInputFile(); //opens input file into object
    string stFirstName;
    string stLastName;
    int stPoints;
    int driverPoint = -1;
    int selection = -2;
    bool quit = false;
    

    //load first 9 (no credits just drivers)
    for(int i = 0; i < 9; i++){
        playerlist >> stFirstName >> stLastName;
        tempplayer.setStudent(stFirstName, stLastName, driverPoint);//Song tempplayer(stFirstName, stLastName, stPoints); //take in three arguments then creates a temp object to add to vector
        stud_vec.push_back(tempplayer);
        }

    //load students data into student vector
   while (playerlist.good()) { // loops until all of the in file has been read
        playerlist >> stFirstName >> stLastName >> stPoints;
        tempplayer.setStudent(stFirstName, stLastName, stPoints);
        stud_vec.push_back(tempplayer);
   }

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
        
        string fName;

        switch(selection){
            case 0: 
            //create a reservation
            //displayVehicles();
            int tempCredit;
            cout << "Enter your first name: ";
            cin >> fName;
            bool checkName = false;
            for(int i = 9; i < stud_vec.size(); i++){
                if(fName = stud_vec[i].firstName){
                    checkName = true;
                    stud_vec[i].displayCredits();
                }
                else{
                    cout << "Student name not in menu" << endl;
                    break;
                }

            }
            break;
            case 3: //display Reservations
               //displayVehicles(car_vec);
            break;
        }


    }
    return 0;
}
void displayVehicles(vector<car> carin){
    cout<<setw(10) << "Truck " << " Compact " << " Sedan " <<endl;
    cout<<setw(10) << " ------ " << " ------ " << " ------ " <<endl;
    cout<<setw(10) << " Purple " << " Red " <<" Blue " 
};

ifstream OpenInputFile()
{
   string inFileName = "dodgeball_team.txt";
   ifstream temp;

   temp.open(inFileName.c_str());

   if (!temp.is_open()) { //checks to see if file opened correctly
       cout << "\nUnsuccessfully... Program Terminated\n" << endl;
       exit(1);
   }
   return (temp);
};