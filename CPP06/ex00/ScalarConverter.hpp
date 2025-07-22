#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <iomanip>

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);

        static void ConvertInt(const std::string &scalar, bool isNegative);
        static void ConvertChar(const std::string &scalar);
        static void ConvertFloat(const std::string &scalar, bool isNegative);
        static void ConvertDouble(const std::string &scalar, bool isNegative);

    public:
        ~ScalarConverter();
        static void Convert(const std::string &scalar);

};

#endif