#include <iostream>
using namespace std;

class Person
{
    string personName;

public:
    Person(string name)
    {
        personName = name;
    };
    string getName() const
    {

        return personName;
    };
    virtual string getNation() const
    {
        return " ";
    };
    virtual void sayHi(const Person &person)
    {
        cout << personName << "says hi" << person.personName << endl;
    }
};

class DeutschePerson : public Person
{
public:
    DeutschePerson(string name) : Person(name){};
    string getNation() const
    {
        return "Deutsche";
    }
    void sayHi(const Person &person)
    {
        if (getNation() == person.getNation())
        {
            cout << getName() << "says hallo" << person.getName() << endl;
        }
        else
        {
            Person::sayHi(person);
        }
    }
};

class TurkishPerson : public Person
{
public:
    TurkishPerson(string name) : Person(name){};
    string getNation() const
    {
        return "Turkish";
    }
    void sayHi(const Person &person)
    {
        if (getNation() == person.getNation())
        {
            cout << getName() << "says merhaba" << person.getName() << endl;
        }
        else
        {
            Person::sayHi(person);
        }
    }
};
