//
// Created by Elif Deniz Göztok on 8.10.2024.
//

#include "string"

class GradeSystem {
public:

    static std::string find_letter_grade(double average_grade) {
        std::string letter_grade_string;
        if (average_grade >= 95){
            letter_grade_string = "A1";
        } else if (average_grade >= 90){
            letter_grade_string = "A2";
        } else if (average_grade >= 85){
            letter_grade_string = "A3";
        } else if (average_grade >= 80){
            letter_grade_string = "B1";
        } else if (average_grade >= 75){
            letter_grade_string = "B2";
        } else if (average_grade >= 70){
            letter_grade_string = "B3";
        } else if (average_grade >= 65){
            letter_grade_string = "C1";
        } else if (average_grade >= 60){
            letter_grade_string = "C2";
        } else if (average_grade >= 55){
            letter_grade_string = "C3";
        } else if (average_grade >= 50){
            letter_grade_string = "D";
        } else {
            letter_grade_string = "F3";
        }
        return letter_grade_string;
    }
};



// static std::string find_letter_grade(double average_grade);



// if (average_grade >= 95  || average_grade <= 100){
// yapmak yerine o kontrolü find letter grade'den önce yapabilirim