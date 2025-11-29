#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(const string &n, const string &addr, const string &dept, const string &r)
    : Person<string, string, string>(n, addr, dept), rank(r) {}

void Teacher::print() const {
    cout << "Giao vien: " << name << "\n";
    cout << "Cap bac: " << rank << "\n";
    cout << "Thuoc khoa: " << department << "\n";
}

const string &Teacher::getRank() const {
    return rank;
}
