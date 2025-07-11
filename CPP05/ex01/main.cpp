#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        // Test Bureaucrat creation
        Bureaucrat john("John", 50);
        std::cout << john << std::endl;

        // Test incrementGrade
        std::cout << "Incrementing John's grade..." << std::endl;
        john.incrementGrade();
        std::cout << john << std::endl;

        // Test decrementGrade
        std::cout << "Decrementing John's grade..." << std::endl;
        john.decrementGrade();
        std::cout << john << std::endl;

        // Test GradeTooHighException
        std::cout << "Creating a Bureaucrat with grade 0 (too high)..." << std::endl;
        Bureaucrat high("High", 0); // Should throw an exception
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try {
        // Test GradeTooLowException
        std::cout << "Creating a Bureaucrat with grade 151 (too low)..." << std::endl;
        Bureaucrat low("Low", 151); // Should throw an exception
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try {
        // Test beSigned with a Form
        Form formA("Nuclear Bomb", 100, 50);
        Bureaucrat alice("Alice", 75);
        std::cout << alice << std::endl;
        std::cout << formA << std::endl;

        alice.signForm(formA); // Should succeed
        std::cout << formA << std::endl;

        // Test signing with insufficient grade
        Bureaucrat bob("Bob", 150);
        std::cout << bob << std::endl;
        bob.signForm(formA); // Should throw an exception
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}