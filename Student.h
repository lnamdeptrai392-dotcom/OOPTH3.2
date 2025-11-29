#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

class Teacher;
class Class;

class Student : public Person<string, string, string> {
private:
    Teacher *advisor = nullptr;
    Class *cls = nullptr;

public:
    Student() = default;
    Student(const string &n, const string &addr, const string &dept);

    void setAdvisor(Teacher *t);
    void setClass(Class *c);

    Teacher *getAdvisor() const;
    Class *getClass() const;

    void print() const override;
};

#endif