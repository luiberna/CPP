#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        //Test Bureaucrat
        Bureaucrat john("John", 1);
        Bureaucrat bob("Bob", 150);
        Bureaucrat alice("Alice", 50);

        std::cout << john << std::endl;
        std::cout << bob << std::endl;
        std::cout << alice << std::endl;

        //ShrubberyCreationForm
        std::cout << "\n--- Testing ShrubberyCreationForm ---" << std::endl;
        ShrubberyCreationForm shrubbery("Garden");
        std::cout << shrubbery << std::endl;

        bob.signForm(shrubbery); //Bob fail to sign
        alice.signForm(shrubbery); //Alice success
        john.executeForm(shrubbery); //John execute

        //RobotomyRequestForm
        std::cout << "\n--- Testing RobotomyRequestForm ---" << std::endl;
        RobotomyRequestForm robotomy("Robot");
        std::cout << robotomy << std::endl;

        alice.signForm(robotomy); //Alice succeed
        alice.executeForm(robotomy); //Alice no execute
        john.executeForm(robotomy); //John execute

        //PresidentialPardonForm
        std::cout << "\n--- Testing PresidentialPardonForm ---" << std::endl;
        PresidentialPardonForm pardon("Criminal");
        std::cout << pardon << std::endl;

        alice.signForm(pardon); //Alice no sign
        alice.executeForm(pardon); //Alice no execute
        john.executeForm(pardon); //John no execute
        john.signForm(pardon); //John sign
        john.executeForm(pardon); //John execute

        //Copy constructor e assignment operator
        std::cout << "\n--- Testing Copy Constructor and Assignment Operator ---" << std::endl;
        RobotomyRequestForm robotomyCopy(robotomy); //Copy constructor
        std::cout << robotomyCopy << std::endl;

        ShrubberyCreationForm shrubberyCopy = shrubbery; //Assignment operator
        std::cout << shrubberyCopy << std::endl;

    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}