#include <iostream>

class Student;

class MarksAverage {
public:
    static float friend_func1(int m1, int m2);
    static float friend_func2(int m1, int m2, int m3);
};

class Student {


public:
    int marks[3];
    void getMarks() {
        std::cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            std::cin >> marks[i];
        }
    }

    friend float MarksAverage::friend_func1(int m1, int m2);
    friend float MarksAverage::friend_func2(int m1, int m2, int m3);
};

float MarksAverage::friend_func1(int m1, int m2) {
    return (static_cast<float>(m1 + m2) / 2);
}

float MarksAverage::friend_func2(int m1, int m2, int m3) {
    return (static_cast<float>(m1 + m2 + m3) / 3);
}

int main() {
    Student student;
    student.getMarks();

    float average2 = MarksAverage::friend_func1(student.marks[0], student.marks[1]);
    float average3 = MarksAverage::friend_func2(student.marks[0], student.marks[1], student.marks[2]);

    std::cout << "Average of 2 subjects: " << average2 << std::endl;
    std::cout << "Average of 3 subjects: " << average3 << std::endl;

    return 0;
}
