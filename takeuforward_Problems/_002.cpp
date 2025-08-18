#include <iostream>
using namespace std;
    void studentGrade(int marks) {
        if(marks >= 90){
            cout << "A"<<endl;
        }
        else if (marks >= 70) {
            cout << "B"<<endl;
        }
        else if (marks >= 50) {
            cout << "C"<<endl;
        }
        else if (marks >= 35) {
            cout << "D"<<endl;
        }
        else if (marks <= 35){
            cout <<"Fail"<<endl;
        }    
    }
int main() {
     int marks1 = 95;
     int marks2 = 14;
    studentGrade(marks1);
    studentGrade(marks2);
    return 0;
}