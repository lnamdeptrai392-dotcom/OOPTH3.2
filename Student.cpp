#include "Student.h"
#include "Teacher.h"
#include "Class.h"
#include <iostream>
using namespace std;

Student::Student(const string &n, const string &addr, const string &dept)
    : Person<string, string, string>(n, addr, dept) {}   // bắt buộc phải chỉ rõ template

void Student::setAdvisor(Teacher *t) { advisor = t; }
void Student::setClass(Class *c) { cls = c; }

Teacher* Student::getAdvisor() const { return advisor; }
Class* Student::getClass() const { return cls; }

void Student::print() const {
    cout << "Sinh vien: " << name << "\n";
    if (cls) cout << "Thuoc lop: " << cls->getName() << "\n";
    if (advisor) cout << "GV phu trach: " << advisor->getName() << "\n";
}