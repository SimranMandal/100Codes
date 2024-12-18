#include<iostream>
using namespace std;

int main(){
    float r, area;
    cout << "Enter the value of radius : ";
    cin >> r;

    area = 3.14 * (r*r);

    cout << "Radius of the circle is " << area ;

    return 0;
}