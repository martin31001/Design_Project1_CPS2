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
    string inputName;

    

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
   Car tempCar;
   tempCar.setType("truck");
   tempCar.setColor("purple");
   car_vec.pushback(tempCar);
   tempCar.setType("compact");
   tempCar.setColor("red");
   car_vec.pushback(tempCar);
   tempCar.setType("sedan");
   tempCar.setColor("blue");
   car_vec.pushback(tempCar);
   tempCar.setType("truck");
   tempCar.setColor("green");
   car_vec.pushback(tempCar);
   tempCar.setType("compact");
   tempCar.setColor("blue");
   car_vec.pushback(tempCar);
   tempCar.setType("sedan");
   tempCar.setColor("black");
   car_vec.pushback(tempCar);
   tempCar.setType("truck");
   tempCar.setColor("black");
   car_vec.pushback(tempCar);
   tempCar.setType("compact");
   tempCar.setColor("yellow");
   car_vec.pushback(tempCar);
   tempCar.setType("sedan");
   tempCar.setColor("green");
   car_vec.pushback(tempCar);

   while (!(selection == -1))
   { // loops until exit command has been given
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
            case 0: 
            //create a reservation
            //displayVehicles();
            int tempCredit;
            student tempStudent;
            cout << "Enter your first name: " << endl;
            cin >> inputName;
            bool checkName = false;
            for(int i = 9; i < stud_vec.size(); i++){ //searches vector for matching name
                if(inputName == stud_vec[i].studentFN()){
                    checkName = true;
                    tempCredit = stud_vec[i].displayCredits();
                    tempStudent = stud_vec[i];
                }
                else{
                    cout << "Student name not in menu" << endl; //if the name isn't there print error message and return
                    break;
                }
            }
            if(tempCredit == 0){ //if zero credits passenger can't reserve
                cout << "Student has zero credit's and can't reserve" << endl; //if the name isn't there print error message and return
                break;
            }
            else{
                displayVehicles(vector<car> carin); //display menu if passenger has credits
            }
             

            int seatNumber;
            cout << "Select a seat" << endl;
            
            //select by category or specific seat
            //FillSeat(int seatNum, tempStudent );//if temp credit is enough and seat is empty ==> FILL SEAT
            //assign unique 3 digit PIN number
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
    cout<<setw(10) << " Purple " << " Red " <<" Blue " << endl;
    cout <<setw(10)<< "(" <<car_vec.at(0).displayRow(1)<<") " << " ("<<  car_vec.at(1).displayRow(1) << ") " << " (" << car_vec.at(2).displayRow(1)<<") " <<endl;
    cout <<setw(10)<< "(" <<car_vec.at(0).displayRow(2)<<" " << " ("<<  car_vec.at(1).displayRow(2) << ") " << " (" << car_vec.at(2).displayRow(2)<<") " <<endl;
    cout<<setw(10) << " Green " << " Blue " <<" Black " << endl;
    cout <<setw(10)<< "(" <<car_vec.at(3).displayRow(1)<<") " << " ("<<  car_vec.at(4).displayRow(1) << ") " << " (" << car_vec.at(5).displayRow(1)<<") " <<endl;
    cout <<setw(10)<< "(" <<car_vec.at(3).displayRow(2)<<" " << " ("<<  car_vec.at(4).displayRow(2) << ") " << " (" << car_vec.at(5).displayRow(2)<<") " <<endl;
    cout<<setw(10) << " Black " << " Yellow " <<" Green " << endl;
    cout <<setw(10)<< "(" <<car_vec.at(6).displayRow(1)<<") " << " ("<<  car_vec.at(7).displayRow(1) << ") " << " (" << car_vec.at(8).displayRow(1)<<") " <<endl;
    cout <<setw(10)<< "(" <<car_vec.at(6).displayRow(2)<<" " << " ("<<  car_vec.at(7).displayRow(2) << ") " << " (" << car_vec.at(8).displayRow(2)<<") " <<endl;
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