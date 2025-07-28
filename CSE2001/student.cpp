#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNo;
    char grade;

public:
    void setStudent(string n, int r, char g) {
        name = n;
        rollNo = r;
        grade = g;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Grade: " << grade << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Student students[3];

    // Read student information
    for (int i = 0; i < 3; i++) {
        string name;
        int rollNo;
        char grade;

        cout << "Enter student " << (i + 1) << " information:" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "Roll No.: ";
        cin >> rollNo;
        cout << "Grade: ";
        cin >> grade;
        cin.ignore(); // ignore newline character

        students[i].setStudent(name, rollNo, grade);
    }

    // Display student information
    cout << "\nStudent Information:\n" << endl;
    for (int i = 0; i < 3; i++) {
        students[i].displayStudent();
    }

    return 0;
}