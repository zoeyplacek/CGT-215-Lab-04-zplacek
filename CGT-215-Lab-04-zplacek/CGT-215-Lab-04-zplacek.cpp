#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl; //option 1
	cout << "\t2. Arithmetic Series" << endl; //option 2
	cout << "\t3. Geometric Series" << endl; //	option 3
	cout << "\t4. Exit" << endl; //exit
	cout << "Your Selection: ";
}
//factorial function
void factorial() {
	int n; // defining n as an integer
	cout << "Factorial: " << endl; // prompt and begin new line
	cout << "Enter a number: "; 
	cin >> n; // stores the number from user

	while (n < 0) { // Checking if n is negative
		cout << "Please enter a POSITIVE number: "; // prompt
		cin >> n; // stores the positive number from user
	}

	// factorial equation
	int answer = 1; // answer starts as 1
	cout << n << "! = "; // prompt
	for (int i = 1; i <= n; i++) { // looped i from 1 to n (user inputed)
		//i++ = i = i + 1
		answer = answer * i; // multiply answer by n essentially
		cout << i;
		if (i < n) { // if i is less than n
			cout << " * "; //then prints multiplying
		}
	}

	cout << " = " << answer << endl; // print answer

}
//arthimetic series function
void arithmetic() {
	int a; // starting number, defining a as an integer
	int b; // adding variable, defining b as an integer
	int n; // number of elements variable, defining n as an integer
	cout << "Arithmetic Series: " << endl; // prompt and begin new line
	cout << "Enter a number to start at: ";
	cin >> a; // stores the starting number from user
	
	cout << "Enter a number to add each time: "; // prompt
	cin >> b; // stores the number to add each time from user

	cout << "Enter the number of elements in the series: "; // prompt
	cin >> n; // stores the number of elements in the series from user

	while (n < 0) { // Checking if n is negative
		cout << "Please enter a POSITIVE number: "; // prompt
		cin >> n; // stores the positive number from user
	}

	// arithmetic series equation
	int sum = 0; // defining starting sum as 0
	for (int i = 1; i <= n; i++) { // looped i from 1 to n (user inputed)
		//i++ = i = i + 1
		cout << a;
		if (i < n) { // if i is less than n
			cout << " + "; // then prints adding
		}
		sum = sum + a; // add starting number to 0
		a = a + b; // add number to add each time to starting number
	}

	cout << " = " << sum << endl; // print answer

}
void geometric() {
	int r; // multiplying variable, defining r as an integer
	int a; // starting number, defining a as an integer
	int n; // number of elements variable, defining n as an integer
	cout << "Geometric Series: " << endl; // prompt
	cout << "Enter a number to start at: "; 
	cin >> a; // stores the starting number from the user

	cout << "Enter a number to multiply by each time: "; // prompt
	cin >> r; // stores the multiplying variable from the user
	
	cout << "Enter the number of elements in the series: "; // prompt
	cin >> n; // stores the number of elements in the series from the user

	while (n < 0) { // Checking if n is negative
		cout << "Please enter a POSITIVE number: "; // prompt
		cin >> n; // stores the positive number from user
	}
	
	// geometric series equation
	int sum = 0; // defining starting sum as 0
	for (int i = 1; i <= n; i++) { // looped i from 1 to n (user inputed)
		//i++ = i = i + 1
		cout << a;
		if (i < n) { // if i is less than n
			cout << " + "; // then prints adding
		}
		sum = sum + a; // add starting number to 0
		a = a * r; // multiply starting number by multiplying variable
	}

	cout << " = " << sum << endl; // print answer	

}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0; // choice outside of range
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
