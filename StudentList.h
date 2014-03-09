#ifndef STUDENTLIST_H_
#define STUDENTLIST_H_

#include "Student.h"
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>

extern string output_text_file;
extern string input_text_file;
extern Student usth_student_list[1000];
extern int stu_list_size;
//StudentMainScreen.cpp
void mainScreen();
////////////////////////////
//StudentFileController.cpp
void subString(string, Student[], int&);
void readFile(string, Student[], int&);
void writeFile(string, Student[], int);
void printStuList(Student[], int);
////////////////////////////	

//StudentSearch.cpp	
void mainSearch();
void searchByName();
void searchByDOB();
void searchByAddress();
void searchByEnterYear();
void searchByClassName();
void searchByMajor();
////////////////////////////

//StudentInfoChange.cpp
void mainChangeStudentInfo();
void changeStudentInfo();
void changeName();
void changeDOB();
void changeAddress();
void changeEnterYear();
void changeClassName();
void changeMajor();
////////////////////////////

//StudentAdd.cpp
void mainAddStudent();
void createStudent();
//void directAddStudent(int, string, string, string, int, string, string);
void addStudent(Student, Student[], int&);
////////////////////////////

//StudentRemove.cpp
void mainRemoveStudent();
void removeStudent(int, Student[], int&);
////////////////////////////	
#endif
