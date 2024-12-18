#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cout << "Enter the x and y co-ordinates : ";
    cin >> x >> y;

    if(x > 0 && y > 0){
        cout << "Co-ordintes " << x << " and " << y << " lies in I quadrant." << endl;
    }
    else if(x < 0 && y > 0){
        cout << "Co-ordintes " << x << " and " << y << " lies in II quadrant." << endl;
    }
    else if(x < 0 && y < 0){
        cout << "Co-ordintes " << x << " and " << y << " lies in III quadrant." << endl;
    }
    else if(x > 0 && y < 0){
        cout << "Co-ordintes " << x << " and " << y << " lies in I quadrant." << endl;
    }
    else if(x == 0 && y != 0){
        cout << "Co-ordintes " << x << " and " << y << " lies in Y-axis." << endl;
    }
    else if(x != 0 && y == 0){
        cout << "Co-ordintes " << x << " and " << y << " lies in X-axis." << endl;
    }
    else if(x == 0 && y == 0){
        cout << "Co-ordintes " << x << " and " << y << " lies in Origin." << endl;
    }

    return 0;
}