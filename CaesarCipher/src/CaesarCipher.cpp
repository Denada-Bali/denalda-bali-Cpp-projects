//============================================================================
// Name        : EncryptionDecryption.cpp
// Author      : Denalda Bali
// Version     :
// Copyright   : Denalda's project
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string Encrypt(string, int);
string Decrypt(string, int);

int main() {
	string word;
	int shift, chose, length;
	int i = 0;

	cout << "Welcome, to Encrypt and Decrypt converter \n";   // Greetings
	cout << "Enter the string: " << endl;                  // prompt the user to enter the string
	getline(cin, word);

	cout << "Enter number of places (0-25): " << endl;    // prompt the user to enter the number of shifted place
	cin >> shift;

	cout << "Chose: \n";           // chose one of the function you want to use
	cout << "1 - Encrypt the string.\n";
	cout << "2 - Decrypt the string.\n";
	cin >> chose;

	switch (chose) {               // switch case conditional
	case 1:
		cout << Encrypt(word, shift) << endl;          //Function called, Encrypt
		break;
	case 2:

		cout << Decrypt(word, shift) << endl;         //Function called, Decrypt
		break;

	default:                                         //perform a task when none of the cases is true.
		;
		cout << "\nInvalid Input !!!\n" << endl;     // print invalid message
	}
	return 0;
}

string Encrypt(string word, int shift) {           // Encrypt function
	int length;

	length = (int) word.length();                  // show how long is input

	for (int i = 0; i < length; i++) {             // for loop, will be looping through every letter on the phrase
		if (isalpha(word[i])) {               // is alpha is use to check if the character is an alphabet or not
			for (int j = 0; j < shift; j++) {               //will move the character according to shift input
				if (word[i] == 'z')                          // check if we are at the end of the alphabet
					word[i] = 'a';                           //  Z goes to A
				else
					word[i]++;                       // increment count, so if it's an 'a' goes to a 'b'
			}
		}
	}
	cout << "\nEncrypted string: " << word << endl;  // display the results
}
string Decrypt(string word, int shift) {            // Decrypt function

	int length;

	length = (int) word.length();
                                                    //Same as above
	for (int i = 0; i < length; i++) {
		if (isalpha(word[i])) {
			for (int j = 0; j < shift; j++) {
				if (word[i] == 'z')
					word[i] = 'a';
				else
					word[i]--;                      // decrement count
			}
		}
	}
	cout << "\nDecrypted string: " << word << endl; // display the results
}
