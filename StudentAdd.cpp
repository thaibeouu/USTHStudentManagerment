#include "StudentList.h"

//"Add student" main screen for users
//Display lines:
//1. Search.
//2. Enter student info.
//3. Direct Add.
//0. Exit.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': createStudent()
//'3': directAddStudent()
//Otherwise: print "Invalid command", ask for other input.
void mainAddStudent() {
	
}

//Let the user input all required info of the new student
//re-enter if the info is invalid
//call addStudent() after all the info has been filled
void createStudent() {
	
}

//Add student newbie into the last of student list l, size++
void addStudent(Student newbie, Student l[], int &size) {		
	l[size] = newbie;
	int newId = l[size - 1].Get_id() + 1;
	l[size].Set_id(newId);
	size++;				
	writeFile(output_text_file, l, size);
}
