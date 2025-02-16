#include "student.h"

Student::Student(string nimi,int ika) {
    Name = nimi;
    Age = ika;

}

void Student::printStudentInfo()
{
    cout << "Opiskelijan nimi: " << getName() << " age: " << getAge() <<  endl;

}

int Student::getAge() const
{
    return Age;
}

void Student::setAge(int newAge)
{
    Age = newAge;
}

string Student::getName() const
{
    return Name;
}

void Student::setName(const string &newName)
{
    Name = newName;
}
