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
////////////////////////////

//StudentInfoChange.cpp
void mainChangeStudentInfo();
void changeStudentInfo();
////////////////////////////

//StudentAdd.cpp
void mainAddStudent();
void createStudent();
void directAddStudent();
void addStudent(Student, Student[], int&);
////////////////////////////

//StudentRemove.cpp
void mainRemoveStudent();
void removeStudent(int, Student[], int&);
////////////////////////////	
#endif
