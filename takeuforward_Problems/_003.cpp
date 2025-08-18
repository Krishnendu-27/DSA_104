#include <iostream>
using namespace std;
void whichWeekDay(int day) {
    switch (day)
    {
    case 1:
        cout << "Sunday"<<endl;
        break;
    case 2:
        cout << "Monday"<<endl;
        break;
    case 3:
        cout << "Tuesday"<<endl;
        break;
    case 4:
        cout << "Wenesday"<<endl;
        break;
    case 5:
        cout << "Thrusday"<<endl;
        break;
    case 6:
        cout << "Friday"<<endl;
        break;
    case 7:
        cout << "Saturday"<<endl;
        break;
    
    default:
        cout << "Invalid"<<endl;
        break;
    }
    }
int main() {
     int day1 = 3;
     int day2 = 8;
     whichWeekDay(day1);
     whichWeekDay(day2);
    return 0;
}