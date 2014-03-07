#include "Person.h"

Person::Person(){
}

Person::~Person() {
	id = 0;
	name = "";
	dOB = "";
	address = "";
}

Person::Person(int id, string name, string dOB, string address) {
	this->id = id;
	this->name = name;
	this->dOB = dOB;
	this->address = address;
}

/*
Person::Person(Person::Person father) {
	this->id = father.id;
	this->name = father.name;
	this->dOB = father.dOB;
	this->address = father.address;
}
*/

int Person::Get_id() {
	return this->id;
}

string Person::Get_name() {
	return this->name;
}

string Person::Get_dOB() {
	return this->dOB;
}

string Person::Get_address() {
	return this->address;
}

void Person::Print() {
	cout << id << endl;
	cout << name << endl;
	cout << dOB << endl;
	cout << address << endl;
}

void Person::Set_id(int id) {
	this->id= id;	
}

void Person::Set_name(string name) {
	this->name = name;
}

void Person::Set_dOB(string dOB) {
	this->dOB = dOB;
}

void Person::Set_address(string address) {
	this->address = address;
}
