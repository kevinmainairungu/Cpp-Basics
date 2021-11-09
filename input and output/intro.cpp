//std library for input and output
//std library for string manupulations

#include <iostream>
#include <string>


int main()
{
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    std:: string secondName = "enter second name\n";
    std::cin >> secondName;
    std::cout << "=Hello " << name << " " << secondName << "!" << std::endl;
    return 0;

}

//create a constuctor that takes in a string and prints it out

class Person
{
public:
    Person(std::string name)
    {
        std::cout << "Hello " << name << "!" << std::endl;
    }
};

