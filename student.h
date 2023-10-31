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

    void setStudent(string firstName, string lastName, int credits);//set name + credits
    string displayName(string firstName, string lastName);//display name 
    int displayCredits(int cr);//display credits

};

#endif