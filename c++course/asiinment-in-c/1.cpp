
#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int marks[5]; // Assuming 5 subjects

public:
    void Get_data() {
        std::cout << "Enter student's name: ";
        std::cin >> name;
        std::cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            std::cin >> marks[i];
        }
    }

    friend class MarksAverage;
};

class MarksAverage {
public:
    static void display(const Student& student) {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += student.marks[i];
        }
        float average = static_cast<float>(sum) / 5;
        std::cout << "Student Name: " << student.name << std::endl;
        std::cout << "Average Marks: " << average << std::endl;
    }
};

int main() {
    Student student;
    student.Get_data();
    MarksAverage::display(student);

    return 0;
}
