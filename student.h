#ifndef student_head
#define student_head

#include<string>
#include <vector>
using namespace std;

class student {

    private:

    string firstName;
    string lastName;
    int credits;

    public:
    string studentFN(); //return student's first name
    void setStudent(string firstName, string lastName, int credits);//set name + credits
    string displayName(string firstName, string lastName);//display name 
    int displayCredits();//display credits

};

#endif