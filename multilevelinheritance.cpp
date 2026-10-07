#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudent() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

// Derived class 1
class Marks : public Student {
protected:
    int m1, m2, m3;

public:
    void getMarks() {
        cout << "Enter 3 marks: ";
        cin >> m1 >> m2 >> m3;
    }
};

// Derived class 2
class Result : public Marks {
public:
    void displayResult() {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;

        cout << "\n--- Student Result ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: PASS\n";
        else
            cout << "Result: FAIL\n";
    }
};

int main() {
    Result student;

    student.getStudent();
    student.getMarks();
    student.displayResult();

    return 0;
}