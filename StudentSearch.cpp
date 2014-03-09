#include "StudentList.h"

//Search screen for user
//Display lines:
//1. Search by name
//2. Search by dOB
//3. Search by address
//4. Search by entry year
//5. Search by class name
//6. Search by major
//0. Back
//Enter command:
////////////////////
//When user input, call the respective functions:
//'1': searchByName()
//'2': searchByDOB()
//'3': searchByAddress()
//'4': searchByEnterYear()
//'5': searchByClassName()
//'6': searchByMajor()
//'0': return;
//Otherwise: show error, ask for other input.
void mainSearch() {
	for(;;) {
		cout << endl << endl;
		cout << "Search a student: " << endl;
		cout << "1. Search by name." << endl;
		cout << "2. Search by dOB." << endl;
	  cout << "3. Search by address." << endl;
	  cout << "4. Search by entry year." << endl;
	  cout << "5. Search by class name." << endl;
	  cout << "6. Search by major." << endl;
	  cout << "0. Back." << endl;
	  
	  cout << "Enter a number: ";
	  
	  // Verify a command if it is integer and belong to {0..6}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command < 7) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
	  switch (command) {
	  	case 1: searchByName();
	  					break;
	  					//mainScreen();
	  	case 2: searchByDOB();
	  					//mainScreen();
	  					break;
	  	case 3: searchByAddress();
	  					//mainScreen();
	  					break;
	  	case 4: searchByEnterYear();
	  					//mainScreen(); 					
	  					break;
	  	case 5: searchByClassName();
	  					break;
	  	case 6: searchByMajor();
	  					break;
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}
}

//Sub functions
//Ask user for searching material (string)
//Ask for re-enter if the input is invalid
//Display all students who has the same info
void searchByName() {
}

void searchByDOB() {
}

void searchByAddress() {
}

void searchByEnterYear() {
}

void searchByClassName() {
}

void searchByMajor() {
}



