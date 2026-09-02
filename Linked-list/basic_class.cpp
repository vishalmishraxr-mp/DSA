#include<iostream>
using namespace std;

class Student{   // user define data type
    public:
        string name;
        int roll_no;
        float marks;

        Student(string n, int r, int m){
            name = n;
            roll_no = r;
            marks = m;
        }
    };
//     void change(Student &s){    // these values are pass by value 
// //so we have to pass their address to reflect the change in function
//           s.name = "monika pandey";
//     }
int main(){ 
    Student s("vishal", 63,97);  // declaration with initialisation
    cout<<s.name<<endl;
    // change(s);
    Student *ptr = &s;
    ptr->name = "komal";
    cout<<s.name<<endl;
return 0;
}