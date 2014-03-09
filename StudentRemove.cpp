#include "StudentList.h"

//"Remove student" main screen for users
//Display lines:
//1. Search.
//2. Remove student by Id.
//0. Back.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': removeStudent()
//'0': return;
//Otherwise: print "Invalid command", ask for other input.
void mainRemoveStudent() {
	for(;;) {
		return;
	}
}

//Ask user for the student id
//If the id is invalid, print "Invalid Id", ask for other input.
//If the id = -1, return
//search the student in usth_student_list[] that match the id
//remove that student, reduce size by 1 
//call writeFile() to update info in output_text_file
void removeStudent(Student l[], int &size) {
	
}
