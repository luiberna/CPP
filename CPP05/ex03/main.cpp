#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        // Test Bureaucrat creation
        Bureaucrat john("John", 1); // Highest grade
        Bureaucrat bob("Bob", 150); // Lowest grade
        Bureaucrat alice("Alice", 50); // Middle grade

        std::cout << john << std::endl;
        std::cout << bob << std::endl;
        std::cout << alice << std::endl;

        // Test Intern creation
        Intern intern;
        std::cout << std::endl << "\n--- Testing Intern Form Creation ---" << std::endl;

        // Test ShrubberyCreationForm
        AForm *shrubberyForm = intern.makeForm("Shrubbery", "Garden");
        std::cout << *shrubberyForm << std::endl;

        bob.signForm(*shrubberyForm); // Bob should fail to sign
        alice.signForm(*shrubberyForm); // Alice should succeed
        john.executeForm(*shrubberyForm); // John should execute successfully

        delete shrubberyForm;

        // Test RobotomyRequestForm
        AForm *robotomyForm = intern.makeForm("Robotomy", "Robot");
        std::cout << *robotomyForm << std::endl;

        alice.signForm(*robotomyForm); // Alice should succeed
        alice.executeForm(*robotomyForm); // Alice should fail to execute
        john.executeForm(*robotomyForm); // John should execute successfully

        delete robotomyForm;

        // Test PresidentialPardonForm
        AForm *pardonForm = intern.makeForm("Presidential", "Criminal");
        std::cout << *pardonForm << std::endl;

        alice.signForm(*pardonForm); // Alice should succeed
        alice.executeForm(*pardonForm); // Alice should fail to execute
        john.executeForm(*pardonForm); // John should execute successfully

        delete pardonForm;

        // Test invalid form creation
        std::cout << "\n--- Testing Invalid Form Creation ---" << std::endl;
        try {
            AForm *invalidForm = intern.makeForm("InvalidForm", "Target");
            delete invalidForm; // Should not reach here
        } catch (const std::exception &e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }

    } catch (const std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}