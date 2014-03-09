#include "StudentList.h"

//"Info change" screen for user
//Display lines:
//1. Search.
//2. Enter student ID.
//0. Back.
//Enter command:
////////////////////
//When user input, call the respective functions:
//'1': mainSearch()
//'2': Display lines: 
//		Enter student Id:
// 		//If the enter Id is invalid, ask for re-enter.
//		//If the enter Id = -1: return;
//		//Else call changeStudentInfo();
//'0': return;
//Otherwise: show error, ask for other input.
void mainChangeStudentInfo() {
	for (;;) {
		cout << endl << endl;
		cout << "Change a student info: " << endl;
		cout << "1. Search." << endl;
		cout << "2. Enter student's ID'." << endl;	  
	  cout << "0. Back." << endl;
	  
	  cout << "Enter a number: ";
	  
	  // Verify a command if it is integer and belong to {0..3}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command < 3) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
		int id;
	  switch (command) {
	  	case 1: mainSearch();
	  					break;
	  					//mainScreen();
	  	case 2: cout << "Enter student ID: ";
	  				while (!(cin >> id)||id<0)
						{
							cout << "Invalid Id!" << endl;
							cin.clear();
						
						}
	  					if (isValidID(id)) changeStudentInfo(id);	  
							else cout << "There is no student with the id: " << id << endl;					
	  					//mainScreen();
	  					break;
	  	
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}
}

//Display the user being change's info
//Display lines:
//1. change name.
//2. change dOB.
//3. change address.
//4. change enter year.
//5. change class name.
//6. change major.
//0. Back
//Enter command:
/////////////////////
//When user input, call the respective functions:
//changeName()
//changeDOB()
//changeAddress()
//changeEnterYear()
//changeClassName()
//changeMajor()
void changeStudentInfo(int id) {
	for(;;) {
		cout << endl << endl;
		cout << "Choose one type of change: " << endl;
		cout << "1. Change name." << endl;
		cout << "2. Change dOB." << endl;
	  cout << "3. Change address." << endl;
	  cout << "4. Change entry year." << endl;
	  cout << "5. Change class name." << endl;
	  cout << "6. Change major." << endl;
	  cout << "0. Back." << endl;
	  
	  cout << "Enter a number: ";
	  
	  // Verify a command if it is integer and belong to {0..4}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command < 5) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
	  switch (command) {
	  	case 1: changeName(id);
	  					break;
	  					//mainScreen();
	  	case 2: changeDOB(id);
	  					//mainScreen();
	  					break;
	  	case 3: changeAddress(id);
	  					//mainScreen();
	  					break;
	  	case 4: changeEnterYear(id);
	  					//mainScreen(); 					
	  					break;
	  	case 5: changeClassName(id);
	  					break;
	  	case 6: changeMajor(id);
	  					break;
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}
}

//With each function, display the current student info, 
//ask for new info, ask for re-enter if the info is invalid
//update student info in usth_student_list[]
//call writeFile() to update the new info in output_text_file
void changeName(int id) {
}

void changeDOB(int id) {
}

void changeAddress(int id) {
}

void changeEnterYear(int id) {	
}

void changeClassName(int id) {
}

void changeMajor(int id) {
}

