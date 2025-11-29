#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "Class.h"
using namespace std;
int main() {
    
    Teacher t1("Dang Hoai Phuong", "123 Cau rong", "IT", "Associate Professor");
    Teacher t2("Le Ba Dat", "456 Ngo Sy Lien", "IT", "Assistant Professor");

    
    Class cls("24T_Nhat2");
    cls.setAdvisor(&t1);

    
    Student s1("Le Xuan Nam", "117 Dong Ke", "OOP");
    Student s2("Hoang Bao Nguyen", "34 Nguyen Luong Bang", "OOP");
    Student s3("Trinh Nhan Tam", "56 Au Co", "OOP");

    
    s1.setAdvisor(&t1); //set giao vien
    s2.setAdvisor(&t1);
    s3.setAdvisor(&t2); //set giao vien khac

    s1.setClass(&cls); //set lop
    s2.setClass(&cls); 
    s3.setClass(&cls);

   
    cls.addStudent(&s1); //them sinh vien vao lop
    cls.addStudent(&s2);
    cls.addStudent(&s3);

 
    cout << "--- Class Info ---\n";
    cls.printList();
    cout << "\n--- Individual Info ---\n";
    t1.print();
    cout << "\n";
    t2.print();
    cout << "\n";
    s1.print();
    cout << "\n";
    s2.print();
    cout << "\n";
    s3.print();

    return 0;
}
