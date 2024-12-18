/*Problem Statement :
In a classroom some of the seats are already occupied by students and only a few seats are available in the classroom. The available seats are assumed as r and n number of students are looking for the seat. We need to find in how many different permutations n number of students can sit on r number of chairs.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    int fact = 1;

    for(int i=num; i>=1; i--){
        fact = fact * i;
    }

    return fact;
}

int main(){
    int students, seats;
    cout << "Enter number of students : " << endl;
    cin >> students;

    cout << "Enter number of seats : " << endl;
    cin >> seats;

    //Permutation formula
    int ans = factorial(students) / factorial(students-seats);

    cout << "Total arrangements : " << ans;

    return 0;
}