//
// Created by vm on 3/15/25.
//

#include "learn_class.h"

#include <iostream>
#include <utility>

// Constructor by using member initializer list
Person::Person(std::string name, const int age) : name(std::move(name)), age(age) {
}

// Or constructor by using this pointer
// Person::Person(std::string name, int age) {
//     this->name = name;
//     this->age = age;
// }


void Person::sayHello() const {
    std::cout << "Hello, my name is " << name << " and I'm " << age << " years old." << std::endl;
}


Bob::Bob(const std::string &name, int age, const std::string &nickname): Person(name, age) {
    this->nickname = nickname;
}

/*
 * There are serval ways to access property from parent class
 * 1. If the property is protected, you can access it directly
 * 2. If the property is private, you can use getter and setter
 */
void Bob::sayHello() const {
    std::cout << "Hello, my name is " << name << " and I'm " << age << " years old. You can call me " << nickname << "." << std::endl;
}