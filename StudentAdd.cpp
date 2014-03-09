#include "StudentList.h"

//"Add student" main screen for users
//Display lines:
//1. Search.
//2. Enter student info.
//3. Direct Add.
//0. Back.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': createStudent()
//'3': directAddStudent()
//'0': return;
//Otherwise: print "Invalid command", ask for other input.
void mainAddStudent() {
		cout << endl << endl;
	cout << "Add a student: " << endl;
	cout << "1. Search." << endl;
	cout << "2. Enter student info." << endl;
  cout << "3. Direct add" << endl;  
  cout << "0. Back." << endl;
  
  cout << "Enter a number: ";
  
  // Verify a command if it is integer and belong to {0..3}
  int command;  
	while (true) {
		cin >> command;
		if (cin && (command < 4) && (command > -1)) break;
		cout << "Invalid command!" << endl;
		cin.clear();
		cin.ignore(256,'\n');
	} 
	//////////////////////////////////////////////////////////
	
  switch (command) {
  	case 1: mainSearch();
  					mainAddStudent();
  	case 2: createStudent();
  					mainAddStudent();
  	case 3: //directAddStudent();
  					mainAddStudent();  					
  	case 0: return;
  	default: 
  		cout << "Invalid command!" << endl;
  		mainScreen();
  		
  }
}

//Let the user input all required info of the new student
//re-enter if the info is invalid
//After all the info has been filled, display options:
//1. Add student //call addStudent() 
//2. Re enter info //mainAddStudent() 
//0. return;
void createStudent() {
	
}

//UPDATE LATER
////Direct add a student by enter his info
////call Student() constructor with the input info
////call addStudent() with the Student just created
////If the input is incorrect, print "Invalid command", ask for other input
//void directAddStudent(int id, string name, string dOB, string address,int enter_year, string class_name, string major) {
//	
//}

//Add student newbie into the end of  usth_student_list[], size++
//write to the output text file
void addStudent(Student newbie, Student l[], int &size) {		
	l[size] = newbie;
	int lastStudentId = l[size - 1].Get_id();
	int newId = lastStudentId + 1;
	l[size].Set_id(newId);
	size++;				
	writeFile(output_text_file, l, size);
}
