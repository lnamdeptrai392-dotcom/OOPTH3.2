#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include <string>
using namespace std;

class Teacher : public Person<string, string, string> {
private:
    string rank;

public:
    Teacher() = default;
    Teacher(const string &n, const string &addr, const string &dept, const string &r);

    void print() const override;
    const string &getRank() const;
};

#endif
