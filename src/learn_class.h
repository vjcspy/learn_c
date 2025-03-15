#ifndef LEARN_CLASS_H
#define LEARN_CLASS_H

#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string name, int age);
    void sayHello() const;
};

#endif //LEARN_CLASS_H
