#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _signGrade(1), _executeGrade(1) {
    std::cout << "Form default constructor called" << std::endl;
}

Form &Form::operator=(const Form &other) {
    std::cout << "Form copy assignement operator called" << std::endl;
    if (this != &other)
        this->_isSigned = other._isSigned;
    return *this;
}

Form::Form(const Form &other) : _signGrade(other._signGrade), _executeGrade(other._executeGrade) {
    std::cout << "Form copy constructor called" << std::endl;
    *this = other;
}

Form::Form(const std::string &name, int signGrade, int executeGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {
    std::cout << "Form parameterized constructor called" << std::endl;
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

//Getters
std::string Form::getName() const {
    return _name;
}

bool Form::isSigned() const {
    return _isSigned;
}

int Form::getSignGrade() const {
    return _signGrade;
}

int Form::getExecuteGrade() const {
    return _executeGrade;
}

//Methods
void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _signGrade)
        throw GradeTooLowException();
    else
        _isSigned = true;
}

//Exceptions
const char* Form::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
    out << "Form Name: " << form.getName() << "\n"
        << "Is Signed: " << (form.isSigned() ? "Yes" : "No" ) << "\n"
        << "Sign Grade: " << form.getSignGrade() << "\n"
        << "Execute Grade: " << form.getExecuteGrade();
    return out;
}