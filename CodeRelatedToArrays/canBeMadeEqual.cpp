// C++ implementation to find if it's
// possible to make all elements of an
// array equal by using two operations.
#include <bits/stdc++.h>
using namespace std;

// Function to find if it's possible
// to make all array elements equal
bool canMakeEqual(int a[], int n)
{
	// Iterate over all numbers
	for (int i = 0; i < n; i++) {

        while (a[i] % 11 == 0) {
			a[i] /= 11;
		}

        while (a[i] % 7 == 0) {
			a[i] /= 7;
		}

		// If a number has a power of 5
		// remove it
		while (a[i] % 5 == 0) {
			a[i] /= 5;
		}

		// If a number has a power of 3
		// remove it
		while (a[i] % 3 == 0) {
			a[i] /= 3;
		}

        while (a[i] % 2 == 0) {
			a[i] /= 2;
		}

	}

	int last = a[0];

	// Check if all elements are equal
	// in the final array
	for (int i = 1; i < n; i++) {
		if (a[i] != last) {
			return false;
		}
	}

	return true;
}

// Driver's Code
int main()
{
	// int arr[] = { 18, 30, 54, 90, 162 };

	// int n = sizeof(arr) / sizeof(arr[0]);

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

	// Function call to check if all
	// element in the array can be equal
	// or not.
	if (canMakeEqual(arr, n)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}

