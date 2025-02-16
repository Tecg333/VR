#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main() {

    vector<Student> studentList;
    int selection = 0;
    studentList.push_back(Student("Mario", 20));
    studentList.push_back(Student("Luigi", 25));
    studentList.push_back(Student("Alejandro", 22));
    studentList.push_back(Student("Zorro", 30));

    do {cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch (selection) {

        case 1: {
            cout << "Opiskelijoiden nimet :" << endl;
            for (const auto &student : studentList) {
                cout << student.getName() << endl;
            }
            break;
        }
        case 2: {
            sort(studentList.begin(), studentList.end(), [](const Student &eka, const Student &toka) {
                return eka.getName() < toka.getName();
            });

            cout << "Opiskelijat aakkosjarjestyksessa :" << endl;
            for ( auto &student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 3: {
            sort(studentList.begin(), studentList.end(), [](const Student &eka, const Student &toka) {
                return eka.getAge() < toka.getAge();
            });

            cout << "Opiskelijat age jarjestyksessa: " << endl;
            for ( auto &student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 4: {


            string nameToFind;
            cout << "Anna nimi: ";
            cin >> nameToFind;

            auto it =find_if(studentList.begin(), studentList.end(), [nameToFind](const Student &n)
            {
              return n.getName() == nameToFind;
            });

            if (it != studentList.end() ) {
                cout << "Opiskelija loytyi: ";
                it->printStudentInfo();
            }
            else {
                cout << "Opiskelijaa ei loytynyt!" << endl;
            }
            break;
        }

        default:
            cout << "Wrong slection, stopping..." << endl;
            break;
        }
    } while (selection < 5);

    return 0;
}
