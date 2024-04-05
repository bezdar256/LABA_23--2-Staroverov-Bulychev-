#include "Exam.h"

Exam::Exam(const std::string& type, const std::string& date, bool passed)
    : type(type), date(date), passed(passed) {}

void Exam::printExamInfo() const {
    std::cout << "Exam Type: " << type << ", Date: " << date << ", Passed: " << (passed ? "Yes" : "No") << std::endl;
}
