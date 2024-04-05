#pragma once
#include <string>
#include <iostream>

class Exam {
public:
    std::string type;
    std::string date;
    bool passed;

    Exam(const std::string& type, const std::string& date, bool passed);
    void printExamInfo() const;
};
