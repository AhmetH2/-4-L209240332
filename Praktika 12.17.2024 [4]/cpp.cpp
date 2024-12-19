#include <iostream>
using namespace std;

class Student {
private:
    int id;       // Student ID
    double grade; // Student grade

public:
    // Function to set the student's ID and grade
    void set_value(int student_id, double student_grade) {
        id = student_id;
        grade = student_grade;
    }

    // Accessor functions
    int get_id() const {
        return id;
    }

    double get_grade() const {
        return grade;
    }
};

// Function to find the student with the highest grade
void max(Student* students, int size) {
    int max_index = 0; // Index of the student with the highest grade

    for (int i = 1; i < size; i++) {
        if (students[i].get_grade() > students[max_index].get_grade()) {
            max_index = i;
        }
    }

    // Output the student ID with the highest grade
    cout << "The student with the highest grade is:\n";
    cout << "ID: " << students[max_index].get_id() << ", Grade: " << students[max_index].get_grade() << endl;
}

int main() {
    const int size = 5;
    Student students[size]; // Array of 5 Student objects

    // Input data for 5 students
    for (int i = 0; i < size; i++) {
        int id;
        double grade;
        cout << "Enter ID and grade for student " << i + 1 << ": ";
        cin >> id >> grade;
        students[i].set_value(id, grade);
    }

    // Find and display the student with the highest grade
    max(students, size);

    return 0;
}
