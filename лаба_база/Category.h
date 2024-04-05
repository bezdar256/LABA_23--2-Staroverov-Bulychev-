#pragma once
#include <string>
#include<iostream>

class Category {
public:
    std::string name;

    Category(const std::string& name) : name(name) {}
    void printCategory() const {
        std::cout << "Category: " << name << std::endl;
    }
};
