#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

Human::Human() : name(""), height(0), age(1) { 
}

Human::Human(string n, int h) {           // c-tor
    name = n;
    height = h;
    age =5;
}

Human::Human(string name, int height, int age) : name(name), height(height), age(age) {           
    cout << "A new human has been created with name " << name << " and age " << age << " and height " << height << " !" << endl;
}

// ------------------- cc-tors

// default cc-tor is sth like that:
Human::Human(const Human & h) : name(h.name), height(h.height), age(h.age) { 
    cout << "A new clone human has been created with name " << name << " and age " << age << " and height " << height << " !" << endl;
}

// -------------------- d-tors
Human::~Human() {                                              // d-tor
    cout << "Human destroyed with name " << name << " and age " << age << " and height " << height << " !" << endl;
}

// -------------------- accessors / manipulators
string Human::getName() {                      // accessor
    return name;
}
void Human::setName(string name) {             // manipulator
    this->name = name;
}

int Human::getAge() {
    return age;
}
void Human::setAge(int age) {
    if (age > 0) {
        this->age = age;
    }
}

int Human::getHeight() {
    return height;
}
void Human::setHeight(int height) {
    this->height = height;
}

// operator = , needed for  x=y
void Human::operator=(const Human & rhs) {         // POTE ME : (lista arxikopoiisis)
    this->name= rhs.name;
    this->age = rhs.age;
    this->height = height*2;
}

