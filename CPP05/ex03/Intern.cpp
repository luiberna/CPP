#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern default constructor called 🍼" << std::endl;
}

Intern::Intern(const Intern &other) {
    std::cout << "Intern copy constructor called 🍼" << std::endl;
    *this = other;
}

Intern &Intern::operator=(const Intern &other) {
    std::cout << "Intern copy assignment operator called 🍼" << std::endl;
    if (this != &other) {
        *this = other;
    }
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern destructor called 🍼" << std::endl;
}

AForm *Intern::makeShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string name,const std::string &target) {
    std::string formNames[3] = {"Shrubbery", "Robotomy", "Presidential"};
    AForm *(Intern::*functions[3])(const std::string &target) = {
        &Intern::makeShrubberyCreationForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makePresidentialPardonForm
    };

    for (int i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << " form" << std::endl;
            return (this->*functions[i])(target);
        }
    }
    std::cout << "Intern cannot create form: " << name << std::endl;
    return NULL;
}
