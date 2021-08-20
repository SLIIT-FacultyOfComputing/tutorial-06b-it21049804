#include "Student.h"
#include <iostream>
#include "cstring"
// Assign studentId and name
void Student::assignDetails(int id,char sname[20]) {
  studentId=id;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"student id:"<<StudentId<<endl;

  cout<<"student name"<<name<<endl;

}
