#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 50);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << "After incrementing grade: " << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << "After decrementing grade: " << bureaucrat << std::endl;

        Bureaucrat highBureaucrat("High Rank", 1);
        std::cout << highBureaucrat << std::endl;

        Bureaucrat lowBureaucrat("Low Rank", 150);
        std::cout << lowBureaucrat << std::endl;

        Bureaucrat eBureuacrat("TooLow Bureaucrat", 0); //Throws exception
        std::cout << eBureuacrat << std::endl;

        Bureaucrat eBureuacrat2("TooHigh Bureaucrat", 151); //Throws exception
        std::cout << eBureuacrat2 << std::endl;

    } catch (const Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}