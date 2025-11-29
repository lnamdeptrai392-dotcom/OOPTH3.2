#include "Class.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>
using namespace std;

Class::Class(const string &n) : name(n) {}

void Class::setAdvisor(Teacher *t) { advisor = t; }

const string &Class::getName() const { return name; }

int Class::numOfStudents() const { return numStudents; }

void Class::addStudent(Student *s) {
    if (s && numStudents < MAX_STUDENTS) {
        studentList[numStudents] = s;
        numStudents++;
    }
}

void Class::printList() const {
    cout << "Lop: " << name << "\n";

    cout << "Giao vien phu trach: ";
    if (advisor) {
        cout << advisor->getName() << " (" << advisor->getRank() << ")";
    } else {
        cout << "(none)";
    }
    cout << "\n";

    cout << "Si so: " << numStudents << "\n";

    for (int i = 0; i < numStudents; ++i) {
        cout << "  [" << (i+1) << "] ";
        if (studentList[i]) studentList[i]->print();
    }
}
