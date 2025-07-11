#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

#ifndef FORM_HPP
#define FORM_HPP

class Form {
    private:
        const std::string _name;
        bool _isSigned;
        const int _signGrade;
        const int _executeGrade;

    public: 
        Form();
        Form(const std::string &name, int _signGrade, int _executeGrade);
        Form(const Form &other);
        Form &operator=(const Form &other);
        ~Form();

        //Exceptions
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        //Getters
        std::string getName() const;
        bool isSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        //Methods
        void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif