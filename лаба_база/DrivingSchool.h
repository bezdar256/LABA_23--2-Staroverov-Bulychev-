#pragma once
#include <vector>
#include "Student.h"
#include "Instructor.h"
#include "TheoryTeacher.h"
#include "Vehicle.h"
#include "Exam.h"

class DrivingSchool {
public:
    std::vector<Student> students;
    std::vector<Instructor> instructors;
    std::vector<TheoryTeacher> theoryTeachers;
    std::vector<Vehicle> vehicles;
    std::vector<Exam> exams;

    // Методы для добавления компонентов в систему
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void addInstructor(const Instructor& instructor) {
        instructors.push_back(instructor);
    }

    void addTheoryTeacher(const TheoryTeacher& teacher) {
        theoryTeachers.push_back(teacher);
    }

    void addVehicle(const Vehicle& vehicle) {
        vehicles.push_back(vehicle);
    }

    void addExam(const Exam& exam) {
        exams.push_back(exam);
    }

    // Дополнительные методы для управления автошколой
};
