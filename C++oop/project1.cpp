#include <iostream>
using std::string;

class Employee {
    public:
        string Name;
        string Company;
        int Age;

        void IntroduceYoursself() {
            std::cout << "Name- "<< Name << std::endl ;
            std::cout << "Company - "<< Company << std::endl ;
            std::cout << "Age- "<< Age << std::endl ;
        }

        Employee(String name, string company, int age ) {
            Name = name;    
            Company = company;   
            Age = age;
        }
};

int  main ()
{
    Employee employee1 = Employee("Ishaan", "KARAN'S COMPANY", 12);
    employee1.IntroduceYoursself();

    Employee employee2 = Employee("Karan", "Karan'S COMPANY", 8);
    employee2.Name = "Karan";
    employee2.Company = "Karan's company";
    employee2.Age = 12;
    employee2.IntroduceYoursself();
}