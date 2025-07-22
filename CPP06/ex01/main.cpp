#include "Serializer.hpp"
#include <iostream>

int main() {
    // Create a Data object
    Data originalData;
    originalData.data_string = "Hello, 42!";
    originalData.data_int = 42;
    originalData.data_float = 3.14f;
    originalData.data_double = 2.71828;
    originalData.data_bool = true;

    // Print original data
    std::cout << "Original Data:" << std::endl;
    std::cout << "  String : " << originalData.data_string << std::endl;
    std::cout << "  Int    : " << originalData.data_int << std::endl;
    std::cout << "  Float  : " << originalData.data_float << std::endl;
    std::cout << "  Double : " << originalData.data_double << std::endl;
    std::cout << "  Bool   : " << (originalData.data_bool ? "true" : "false") << std::endl;

    // Serialize the pointer
    uintptr_t raw = Serializer::serialize(&originalData);

    // Deserialize back to pointer
    Data* deserializedData = Serializer::deserialize(raw);

    // Print deserialized data
    std::cout << "\nDeserialized Data:" << std::endl;
    std::cout << "  String : " << deserializedData->data_string << std::endl;
    std::cout << "  Int    : " << deserializedData->data_int << std::endl;
    std::cout << "  Float  : " << deserializedData->data_float << std::endl;
    std::cout << "  Double : " << deserializedData->data_double << std::endl;
    std::cout << "  Bool   : " << (deserializedData->data_bool ? "true" : "false") << std::endl;

    return 0;
}
