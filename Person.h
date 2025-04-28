#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(string firstName, float newWeight, int age);
    ~Person();
    
    // Overload the add operator
    float operator+(const Person& otherPerson);
    
    // Relational operators for mFirstName
    bool operator==(const Person& otherPerson);
    bool operator!=(const Person& otherPerson);
    
    // Relational operators for mAge
    bool operator<(const Person& otherPerson);
    bool operator>(const Person& otherPerson);
    
    // Conversion operators
    operator int();
    operator string();
    operator float();

private:
    float mWeight;
    string mFirstName;
    int mAge;
};