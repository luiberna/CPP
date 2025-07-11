#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

#ifndef INTERN_HPP
#define INTERN_HPP

class Intern {
    private:
        AForm *makeShrubberyCreationForm(const std::string &target);
        AForm *makeRobotomyRequestForm(const std::string &target);
        AForm *makePresidentialPardonForm(const std::string &target);

    public:
        Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);
        ~Intern();

        //Methods
        AForm *makeForm(std::string name,const std::string &target);
};

#endif