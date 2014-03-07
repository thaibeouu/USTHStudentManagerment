#include "Studentlist.h"
#include<iostream>
using namespace std;

int main() {
	//Test substring:
	Student l[100];	
	int size = 0;
	string testStudent = "1:Nguyen Van A:1/1/90:Hanoi:2010:ABC1:ICT";	
	subString(testStudent, l, size);
	
	//Test PrintStuList
	printStuList(l, size);
	
	//Test read file
	Student l2[100];
	string inputFile = "Student.txt";
	readFile(inputFile, l2, size);
	printStuList(l2, size);
	
	//Test writeFile	
	string outputFile = "StudentListTest.txt";
	writeFile(outputFile, l2, size);
	
	return 0;
}
