#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("DefaultRobotomy", 72, 45) {
    _target = "Default";
    std::cout << "RobotomyRequestForm default constructor called 🤖" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target + "_robotomy", 72, 45) {
    _target = target;
    std::cout << "RobotomyRequestForm parameterized constructor called 🤖" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other) {
    std::cout << "RobotomyRequestForm copy constructor called 🤖" << std::endl;
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    std::cout << "RobotomyRequestForm copy assignment operator called 🤖" << std::endl;
    if (this != &other) {
        this->_target = other._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called 🤖" << std::endl;
}

void RobotomyRequestForm::executeForm() const {
    std::cout << "🔊 Drrrrrr... " << std::endl;
    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully 🤖" << std::endl;
    else
        std::cout << "Robotomy failed for " << _target << " 🤖" << std::endl;
}