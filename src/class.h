#ifndef LEARN_CLASS_H
#define LEARN_CLASS_H

#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string name, int age);

    void sayHello() const;
};

class Bob : public Person {
    std::string nickname;

public:
    Bob(const std::string &name, int age, const std::string &nickname);

    void sayHello() const;
};

#endif //LEARN_CLASS_H
