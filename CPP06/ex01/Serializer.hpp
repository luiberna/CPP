#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <stdint.h>


struct Data {
    std::string data_string;
    int data_int;
    float data_float;
    double data_double;
    bool data_bool;
};

class Serializer {
    private:
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &other);
        ~Serializer();

    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif