#include<iostream>
using namespace std;

int main(){
    cout << "Enter the year : ";
    int year;
    cin >> year;

    if(year % 400 == 0){
        cout << "Year " << year << " is a leap year.";
    }
    else if(year % 4 == 0 && year % 100 != 0){
        cout << "Year " << year << " is a leap year.";
    }
    else{
        cout << "Year " << year << " is not a leap year.";
    }

    return 0;
}