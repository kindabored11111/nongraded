//
// Created by Elif Deniz Göztok on 8.10.2024.
//

#include "string"
#include "GradeSystem.cpp"

class Student {
private:
    int midterm_grade;
    int final_grade;
    double average_grade;
    std::string letter_grade;


public:
    // Constructor definition
    Student() {
        midterm_grade = -1;
        final_grade = -1;
        average_grade = -1;
        letter_grade = "";
    }

    void analize() {
        // average grade = (midterm grade * 0.4) + (final grade * 0.6)
        // letter grade'i bul
        this->letter_grade = GradeSystem::find_letter_grade(average_grade);
    }
};




