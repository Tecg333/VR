#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

using namespace std;


class Student
{
public:
    Student(string,int);
    void printStudentInfo();
    int getAge() const;
    void setAge(int newAge);
    string getName() const;
    void setName(const string &newName);

private:
    string Name;
    int Age;

};

#endif // STUDENT_H
