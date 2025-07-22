#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter() {
}

void ScalarConverter::ConvertChar(const std::string &scalar) {
    char charValue = scalar[0];
    std::cout << "Char: '" << charValue << "'" << std::endl;
    std::cout << "Int: " << static_cast<int>(charValue) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Float: " << static_cast<float>(charValue) << "f" << std::endl;
    std::cout << "Double: " << static_cast<double>(charValue) << std::endl;
}

void ScalarConverter::ConvertInt(const std::string &scalar, bool isNegative) {
    int value = std::atoi(scalar.c_str());
    if (isNegative)
        value = -value;
    if (value < 32 || value > 126)
        std::cout << "Char: Non displayable" << std::endl;
    else
        std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
    std::cout << "Int: " << value << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Float: " << static_cast<float>(value) << "f" << std::endl;
    std::cout << "Double: " << static_cast<double>(value) << std::endl;
}

void ScalarConverter::ConvertFloat(const std::string &scalar, bool isNegative) {
    float value = std::strtof(scalar.c_str(), NULL);
    if (isNegative)
        value = -value;
    if (value < 32 || value > 126)
        std::cout << "Char: Non Displayable" << std::endl;
    else
        std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
    std::cout << "Int: " << static_cast<int>(value) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Float: " << static_cast<float>(value) << "f" << std::endl;
    std::cout << "Double: " << static_cast<double>(value) << std::endl;
}

void ScalarConverter::ConvertDouble(const std::string &scalar, bool isNegative) {
    double value = std::strtod(scalar.c_str(), NULL);
    if (isNegative)
        value = -value;
    if (value < 32 || value > 126)
        std::cout << "Char: Non Displayable" << std::endl;
    else
        std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
    std::cout << "Int: " << static_cast<int>(value) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Float: " << static_cast<float>(value) << "f" << std::endl;
    std::cout << "Double: " << static_cast<double>(value) << std::endl;
}

void ScalarConverter::Convert(const std::string &scalar) {
    if (scalar.empty()) {
        std::cout << "Error: Empty input" << std::endl;
        return;
    }
    //Char
    if (scalar.length() == 1 && !isdigit(scalar[0])) {
        ConvertChar(scalar);
        return;
    }
    //Stuff
    if (scalar == "nan" || scalar == "nanf") {
        std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: nanf" << std::endl;
        std::cout << "Double: nan" << std::endl; 
        return;
    }
    if (scalar == "inf" || scalar == "inff") {
        std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: inff" << std::endl;
        std::cout << "Double: inf" << std::endl;
        return;
    }
    if (scalar == "-inf" || scalar == "-inff") {
        std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: -inff" << std::endl;
        std::cout << "Double: -inf" << std::endl;
        return;
    }
    //Trimmer and negative
    bool isNegative = false;
    std::string trimmedScalar;
    if (scalar[0] == '-' || scalar[0] == '+') {
        isNegative = (scalar[0] == '-');
        trimmedScalar = scalar.substr(1);
    }
    else
        trimmedScalar = scalar;
    //Checker
    bool dotSeen = false;
    bool fSeen = false;
    for (size_t i = 0; i < trimmedScalar.length(); ++i) {
        char c = trimmedScalar[i];
        if (isdigit(c))
            continue;
        if (c == '.') {
            if (dotSeen) {
                std::cout << "Error: Unknown Type" << std::endl;
                return;
            }
            dotSeen = true;
            continue;
        }
        if (c == 'f') {
            if (i != trimmedScalar.length() - 1 || fSeen) {
                std::cout << "Error: Unknown Type" << std::endl;
                return;
            }
            fSeen = true;
            continue;
        }
        std::cout << "Error: Unknown Type" << std::endl;
        return;
    }
    //Numeral Converters
    if (trimmedScalar.find('.') != std::string::npos) {
        if (trimmedScalar[trimmedScalar.length() - 1] == 'f') {
            ConvertFloat(trimmedScalar, isNegative); //Float
            return;
        }
        else {
            ConvertDouble(trimmedScalar, isNegative); //Double
            return;
        }
    }
    else {
        ConvertInt(trimmedScalar, isNegative); //Int
        return;
    }
    std::cout << "Error: Unknown Type" << std::endl;
}