#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

#ifndef AFORM_HPP
#define AFORM_HPP

class AForm {
    private:
        const std::string _name;
        bool _isSigned;
        const int _signGrade;
        const int _executeGrade;
        AForm();

    public: 
        AForm(const std::string &name, int _signGrade, int _executeGrade);
        AForm(const AForm &other);
        AForm &operator=(AForm const &other);
        virtual ~AForm();

        //Exceptions
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class FormNotSignedException : public std::exception {
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
        void execute(const Bureaucrat &executor);
        virtual void executeForm() const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif