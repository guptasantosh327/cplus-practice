#include <iostream>

using namespace std;

// Abstract Class
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

// Inharting Abstract class which have all the complex logic and EMployee class should have methods of abstract class
class Employee : AbstractEmployee
{
public:
    // Can be accessible by inherting class but not outside of class
protected:
    string Name;

    // Can not be accessible using getter and setter
private:
    string Company;
    int Age;

    // Can be accessed outside class, by inherting class except abstract method untill inherited publicly
public:
    void introduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    // Constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    // Method of abstract class must have this method
    void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " Got Promoted!" << endl;
        }
        else
        {
            cout << Name << "No Promotion for You" << endl;
        }
    }
};

// Inherting base class Employee publicly so that can access abstract class method of base class(Employee)
// Protected methods and attributes are available
// Private is not available
class Developer : public Employee
{
public:
    string ProgrammingLanguage;
    // Definig devloper constructor and calling base constructor
    Developer(string name, string company, int age, string programmingLanguage) : Employee(name, company, age)
    {
        ProgrammingLanguage = programmingLanguage;
    }
    void programmmingExpert()
    {
        cout << Name << " knows " << ProgrammingLanguage << endl;
    }
    void developerPromotion()
    {
        AskForPromotion();
    }
};

int main()
{
    // Employee employee1 = Employee("Santosh", "BRT", 24);
    // Employee employee2 = Employee("Monisha", "BRT", 34);

    Developer d1 = Developer("Santosh", "Amazon", 24, "C++");
    Developer d2 = Developer("Monisha", "BRT", 34, "HTML");
    d1.programmmingExpert();
    // d1.developerPromotion();
    d1.AskForPromotion();

    d2.programmmingExpert();
    d2.developerPromotion();
    // cout << employee1.Name << endl;
    return 0;
}