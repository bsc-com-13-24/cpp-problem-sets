#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(){
    mWeight = 0.0;
    mAge = 0;
    firstName = "";
}

Person::Person(float newWeight, string name, int age){
    mWeight = newWeight;
    firstName = name;  
    mAge = age; 
}

float Person::operator+(const Person &otherPerson){
    Person person;

    return person.mWeight = this -> mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person &otherPerson){
    return this ->firstName == otherPerson.firstName;
}

bool Person::operator!=(const Person &otherPerson){
    return this ->firstName != otherPerson.firstName;
}

bool Person::operator<(const Person &otherPerson){
    return this -> mAge < otherPerson.mAge;
}

bool Person::operator>(const Person &otherPerson){
    return this -> mAge > otherPerson.mAge;
}

Person::operator int(){
    return mAge;
}

Person::operator string(){
    return firstName;
}

Person::operator float(){
    return mWeight;
}

Person::~Person() = default;