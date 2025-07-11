#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("DefaultShrubbery", 145, 137) {
    _target = "Default";
    std::cout << "ShrubberyCreationForm default constructor called 🌲" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target + "_shrubbery", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm parameterized constructor called 🌲" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other) {
    std::cout << "ShrubberyCreationForm copy constructor called 🌲" << std::endl;
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    std::cout << "ShrubberyCreationForm copy assignment opertator called 🌲" << std::endl;
    if (this != &other) {
        this->_target = other._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called 🌲" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
    return _target;
}

void ShrubberyCreationForm::executeForm() const {
    std::ofstream file((_target + "_shrubbery").c_str());
    file << "                     ; ; ;             ; ;;\n"
         << "                   ;        ;  ;     ;;    ;\n"
         << "                ;                 ;         ;  ;\n"
         << "               ;                ;                ;\n"
         << "               ;                ;                ;;\n"
         << "               ;          ;            ;              ;\n"
         << "               ;            ';,        ;               ;\n"
         << "               ;              'b      *\n"
         << "                ;              '$    ;;                ;;\n"
         << "               ;    ;           $:   ;:               ;\n"
         << "             ;;      ;  ;;      *;  @):        ;   ; ;\n"
         << "              ;           ;     :@,@):   ,;**:'   ;\n"
         << "              ;      ;,         :@@*: ;;**'      ;   ;\n"
         << "              ;        ';o;    ;:(@';@*\"'  ;\n"
         << "               ;  ;       'bq,;;:,@@*'   ,*      ;  ;\n"
         << "                  ;       ,p$q8,:@)'  ;p*'      ;\n"
         << "                   ;     '  ; '@@Pp@@*'    ;  ;\n"
         << "                    ;  ; ;;    Y7'.'     ;  ;\n"
         << "                              :@):.\n"
         << "                             .:@:'.\n"
         << "                           .::(@:.   \n";
    file.close();
    std::cout << "ShrubberyCreationForm executed successfully 🌲 to file: " << _target + "_shrubbery" << std::endl;
}