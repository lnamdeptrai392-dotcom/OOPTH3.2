#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <iostream>
using namespace std;

class Student;
class Teacher;

class Class {
private:
    static const int MAX_STUDENTS = 100;
    string name;
    Student* studentList[MAX_STUDENTS];
    int numStudents = 0;
    Teacher* advisor = nullptr;

public:
    Class() = default;
    Class(const string &n);

    void addStudent(Student *s);
    void setAdvisor(Teacher *t);

    const string &getName() const;
    int numOfStudents() const;

    void printList() const;
};

#endif
