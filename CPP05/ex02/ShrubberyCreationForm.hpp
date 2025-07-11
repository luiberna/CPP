#include "AForm.hpp"
#include <fstream>

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


//terminar a classe
class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;
        ShrubberyCreationForm();

    public:
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        virtual ~ShrubberyCreationForm();

        //Methods
        void executeForm() const;

        //Getters
        std::string getTarget() const;

        //Exceptions
        class FileOpenException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif