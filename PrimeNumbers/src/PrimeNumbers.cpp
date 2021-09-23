//============================================================================
// Name        : ComputerOrganizationProject.cpp
// Author      : Denalda Bali
// Version     :
// Copyright   : De nalda's project
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number, count;

	cout << "Enter an integer: " << endl;           //   prompt the user to enter an integer
	cin >> number;

	if (number > 1) {                           // check if is negative number print the error message
                                         //the function check for all prime numbers
		for (int i = 1; i <= number; i++) { //for loop runs from i == 1 to i <= number and increases the value of i by 1 with each iteration
			count = 0;                        // initialize count with 0
			for (int j = 2; j <= i / 2; j++) {  //The number would not be a prime number if the number entered  is divisible by i.
                                               //But if the input number is not divisible by i
				                               //that implies that only 1 is divisible by the input number and that number itself.
				if (i % j == 0) {
					count++;  // increase the value of count
					break;
				}
			}
			if ( count == 0 && i != 1) // if count is equal with 0 and i is different from 1 prints the value of i
				cout << i << setw(4);
		}
	} else {                              //stops the program if it is a negative number
		cout << "ERROR!!! The entered integer is not positive!. " << endl;
		cout << "Try Again! ";
	}
	return 0;
}

