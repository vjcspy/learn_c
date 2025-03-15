//
// Created by vm on 3/15/25.
//

#include "learn_class.h"

#include <iostream>
#include <utility>

// Constructor by using member initializer list
Person::Person(std::string name, const int age) : name(std::move(name)), age(age) {}

// Or constructor by using this pointer
// Person::Person(std::string name, int age) {
//     this->name = name;
//     this->age = age;
// }


void Person::sayHello() const {
    std::cout << "Hello, my name is " << name << " and I'm " << age << " years old." << std::endl;
}
