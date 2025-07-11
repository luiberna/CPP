#include "AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _signGrade(1), _executeGrade(1) {
    std::cout << "Form default constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other) {
    std::cout << "Form copy assignement operator called" << std::endl;
    if (this != &other)
        this->_isSigned = other._isSigned;
    return *this;
}

AForm::AForm(const AForm &other) : _signGrade(other._signGrade), _executeGrade(other._executeGrade) {
    std::cout << "Form copy constructor called" << std::endl;
    *this = other;
}

AForm::AForm(const std::string &name, int signGrade, int executeGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {
    std::cout << "Form parameterized constructor called" << std::endl;
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

AForm::~AForm() {
    std::cout << "Form destructor called" << std::endl;
}

//Getters
std::string AForm::getName() const {
    return _name;
}

bool AForm::isSigned() const {
    return _isSigned;
}

int AForm::getSignGrade() const {
    return _signGrade;
}

int AForm::getExecuteGrade() const {
    return _executeGrade;
}

//Methods
void AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _signGrade)
        throw GradeTooLowException();
    else
        _isSigned = true;
}

void AForm::execute(const Bureaucrat &executor) {
    if (!_isSigned)
        throw FormNotSignedException();
    if (executor.getGrade() > _executeGrade)
        throw GradeTooLowException();
    else
        executeForm();
}

//Exceptions
const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed!";
}

std::ostream &operator<<(std::ostream &out, const AForm &form) {
    out << "Form Name: " << form.getName() << "\n"
        << "Is Signed: " << (form.isSigned() ? "Yes" : "No" ) << "\n"
        << "Sign Grade: " << form.getSignGrade() << "\n"
        << "Execute Grade: " << form.getExecuteGrade();
    return out;
}