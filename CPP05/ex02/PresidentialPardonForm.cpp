#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("DefaultPardon", 25, 5) {
    _target = "Default";
    std::cout << "PresidentialPardonForm default constructor called 🕊️" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(target + "_pardon", 25, 5) {
    _target = target;
    std::cout << "PresidentialPardonForm parameterized constructor called 🕊️" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {
    std::cout << "PresidentialPardonForm copy constructor called 🕊️" << std::endl;
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    std::cout << "PresidentialPardonForm copy assignment operator called 🕊️" << std::endl;
    if (this != &other) {
        this->_target = other._target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called 🕊️" << std::endl;
}

void PresidentialPardonForm::executeForm() const {
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox 🕊️" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
    return _target;
}