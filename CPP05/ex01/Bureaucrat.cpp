#include "Bureaucrat.hpp"
#include "Form.hpp"

//Default constructor
Bureaucrat::Bureaucrat() : _name("Default"), _grade(1) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name){
    std::cout << "Bureaucrat parameterized constructor called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->_grade = grade;
}

//Destructor
Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

//Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = other;
}

//Copy assignemnt operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
    std::cout << "Bureaucrat copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_grade = other._grade;
    }
    return *this;
}

//Getters
std::string Bureaucrat::getName() const {
    return _name;
}
int Bureaucrat::getGrade() const {
    return _grade;
}

//Exceptions
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

//Methods
void Bureaucrat::incrementGrade() {
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

void Bureaucrat::decrementGrade() {
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << "Bureaucrat " << _name << " signed the form " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Bureaucrat " << _name << " could not sign the form " << form.getName() << ": " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}