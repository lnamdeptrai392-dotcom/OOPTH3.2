#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2, typename T3>
class Person {
protected:
    T1 name;
    T2 address;
    T3 department;

public:
    Person() = default;

    Person(const T1& n, const T2& addr, const T3& dept)
        : name(n), address(addr), department(dept) {}

    virtual ~Person() = default;

    virtual void print() const {
        cout << "Ho Ten: " << name << "\n";
        cout << "Dia Chi: " << address << "\n";
        cout << "Thuoc khoa: " << department << "\n";
    }

    const T1& getName() const {
        return name;
    }
};

#endif