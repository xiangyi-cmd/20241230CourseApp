#include "Person.h"
#include <string>
#include<iostream>

using namespace std;

Person::Person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate) : id(id), lastName(lastName), firstName(firstName), gender(gender), birthDate(birthDate)
{
}

Person::Person()
{
}


string Person::getId() const
{
    return id;
}

string Person::getLastName() const
{
    return lastName;
}

string Person::getFirstName() const
{
    return firstName;
}

string Person::getGender() const
{
    return gender;
}

string Person::getBirthDate() const
{
    return birthDate;
}

void Person::setId(const string& id)
{
    this->id = id;
}

void Person::setLastName(const string& lastName)
{
    this->lastName = lastName;
}

void Person::setFirstName(const string& firstName)
{
    this->firstName = firstName;
}

void Person::setGender(const string& gender)
{
    this->gender = gender;
}

void Person::setBirthDate(const string& birthDate)
{
    this->birthDate = birthDate;
}

void Person::display() const //���ƦL�X��
{
    cout << "�����Ҧr��: " << id << endl;
    cout << "�m: " << lastName << endl;
    cout << "�W: " << firstName << endl;
    cout << "�ʧO: " << gender << endl;
    cout << "�X�ͦ~���(�褸�~): " << birthDate << endl;
}
