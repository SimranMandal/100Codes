#include<iostream>
using namespace std;

int main(){
    int month, year;
    cout << "Enter a month with an year: ";
    cin >> month >> year;
    int days = 0;

    if((month == 2) && (year%4 == 0 || (year%100 != 0 && year%4==0)) ){
        days = 29;
    }
    else if(month == 2) days = 28;

    else if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 9) || (month == 11)){
        days = 31;
    }

    else days = 30;

    cout << "Number of days in month " << month << " of " << year << " is " << days ;

    return 0;
}