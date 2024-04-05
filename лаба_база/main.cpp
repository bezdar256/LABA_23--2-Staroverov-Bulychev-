#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Student.h"
#include "Instructor.h"
#include "TheoryTeacher.h"
#include "Vehicle.h"
#include "Exam.h"
// Предположим, что здесь подключены все необходимые заголовочные файлы


int main() {
 std::srand(std::time(nullptr)); // Инициализация генератора случайных чисел

    // Сбор информации о пользователе
    std::string firstName, lastName, patronymic, region, city, district, street, category;
    int age;
    std::cout << "Enter your first name: "; std::cin >> firstName;
    std::cout << "Enter your last name: "; std::cin >> lastName;
    std::cout << "Enter your patronymic: "; std::cin >> patronymic;
    std::cout << "Enter your age: "; std::cin >> age;
    std::cout << "Enter your region: "; std::cin >> region;
    std::cout << "Enter your city: "; std::cin >> city;
    std::cout << "Enter your district: "; std::cin >> district;
    std::cout << "Enter your street: "; std::cin >> street;
    std::cout << "Enter the category of driving license you wish to obtain (A, B, C): "; std::cin >> category;

    Location location(region, city, district, street);
    Student student(firstName, lastName, patronymic, age, location);

    std::cout << student << std::endl;

    // Полный список автошкол
    std::vector<std::string> allDrivingSchools = {"School Maks", "School Omega", "School Mustang", "School Proauto", "School Koleso", "School Autoshok","School Forsaj","School Bars"};
    std::vector<std::string> offeredSchools;

    // Выбор трех случайных автошкол
    while (offeredSchools.size() < 3) {
        int index = std::rand() % allDrivingSchools.size();
        offeredSchools.push_back(allDrivingSchools[index]);
        allDrivingSchools.erase(allDrivingSchools.begin() + index); // Удаление, чтобы избежать повторений
    }

    // Предложение случайных автошкол
    std::cout << "Available driving schools in your area:" << std::endl;
    for (size_t i = 0; i < offeredSchools.size(); ++i) {
        std::cout << i + 1 << ". " << offeredSchools[i] << std::endl;
    }

    // Выбор автошколы пользователем
    int choice;
    std::cout << "Enter the number of the driving school you wish to attend: ";
    std::cin >> choice;
    std::string selectedSchool = offeredSchools[choice - 1];
    std::cout << "You selected: " << selectedSchool << std::endl;

    // Рандомный выбор автомобиля в зависимости от категории
    std::vector<Vehicle> vehicles;
    if (category == "B") {
        vehicles = {Vehicle("Toyota Corolla", "B"), Vehicle("Honda Civic", "B"),Vehicle ("Volkswagen Golf", "B"), Vehicle ("Ford Focus", "B"), Vehicle ("Hyundai Elantra", "B") };
    } else if (category == "C") {
        vehicles = {Vehicle("Volvo Truck", "C"), Vehicle("MAN TGX", "C"),Vehicle ("Scania Truck", "C") };
        
    }else if (category == "A") {
        vehicles = { Vehicle("Honda CB500F", "A"), Vehicle("Kawasaki Ninja 400", "A"), Vehicle("Yamaha YZF-R6", "A"), Vehicle("Suzuki GSX-R750", "A") };
    }
    Vehicle selectedVehicle = vehicles[std::rand() % vehicles.size()];

    // Рандомный выбор инструктора и преподавателя
    std::vector<Instructor> instructors = {
        Instructor ("Ivan", "Smirnov", 50, selectedVehicle),
        Instructor ("Sergei", "Ivanov", 30, selectedVehicle),
        Instructor ("Maria", "Kuznetsova", 27, selectedVehicle),
        Instructor ("Oleg", "Popov", 60, selectedVehicle),
        Instructor ("Elena", "Petrova", 23, selectedVehicle),
        Instructor ("Dmitry", "Sokolov", 34, selectedVehicle),
        Instructor ("Natalia", "Volkova", 36, selectedVehicle),
        Instructor ("Alexei", "Fedorov", 29, selectedVehicle),
        Instructor ("Olga", "Morozova", 55, selectedVehicle),
        Instructor ("Viktor", "Razin", 48, selectedVehicle)
    };
    std::vector<TheoryTeacher> theoryTeachers = {
        TheoryTeacher("Maria", "Petrova", 37, "Traffic Laws"),
        TheoryTeacher("Roman", "Staroverov", 42, "Safety Rules"),
        TheoryTeacher ("Igor", "Sidorov", 40, "Driving Techniques"),
        TheoryTeacher ("Olga", "Smirnova", 38, "Road Regulations"),
        TheoryTeacher ("Andrew", "Bulychev", 40, "Driving Techniques")

    };

    int instructorIndex = std::rand() % instructors.size();
    int teacherIndex = std::rand() % theoryTeachers.size();

    // Выводим информацию о выбранном студентом
    std::cout << "\nYour Driving School: " << selectedSchool << std::endl;
    std::cout << "Your Vehicle for Category " << category << ": " << selectedVehicle.model << " (" << selectedVehicle.category << ")" << std::endl;
    std::cout << "\nInstructor Info:" << std::endl;
    instructors[instructorIndex].printInstructorInfo();
    std::cout << "\nTheory Teacher Info:" << std::endl;
    theoryTeachers[teacherIndex].printTeacherInfo();

    return 0;
}


//g++ -std=c++11 main.cpp Person.cpp Student.cpp Instructor.cpp TheoryTeacher.cpp Vehicle.cpp Exam.cpp Location.cpp -o program
//./program
