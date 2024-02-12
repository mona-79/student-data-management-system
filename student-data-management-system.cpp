#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a structure to hold student data
struct Student {
    string name;
    int age;
    double gpa;
};

// Function to add a new student to the database
void addStudent(vector<Student> &database) {
    Student newStudent;
    cout << "Enter student name: ";
    getline(cin, newStudent.name);
    cout << "Enter student age: ";
    cin >> newStudent.age;
    cout << "Enter student GPA: ";
    cin >> newStudent.gpa;
    
    // Clear input buffer
    cin.ignore();
    
    // Add the new student to the database
    database.push_back(newStudent);
}

// Function to display all students in the database
void displayStudents(const vector<Student> &database) {
    cout << "Student Database:\n";
    cout << "--------------------------------\n";
    cout << "Name\tAge\tGPA\n";
    cout << "--------------------------------\n";
    for (const auto &student : database) {
        cout << student.name << "\t" << student.age << "\t" << student.gpa << "\n";
    }
    cout << "--------------------------------\n";
}

int main() {
    vector<Student> database;
    int choice;
    
    do {
        cout << "\nStudent Data Management System\n";
        cout << "1. Add a new student\n";
        cout << "2. Display all students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        // Clear input buffer
        cin.ignore();
        
        switch(choice) {
            case 1:
                addStudent(database);
                break;
            case 2:
                displayStudents(database);
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
