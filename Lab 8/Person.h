#pragma once
#include <string>
using namespace std;

class Person
{
public:
    Person();
    Person(float newWeight, string name, int age);
    ~Person();
    float operator+(const Person &otherPerson);
    bool operator==(const Person &otherPerson);
    bool operator!=(const Person &otherPerson);
    bool operator<(const Person &otherPerson);
    bool operator>(const Person &otherPerson);
    operator int();
    operator string();
    operator float();


private:
    float mWeight;
    string firstName;
    int mAge;
};