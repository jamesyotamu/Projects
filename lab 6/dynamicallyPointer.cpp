#include <iostream>
#include <string>

int main() {
    // Dynamically allocate an integer and a string
    int* dynamicInt = new int;
    std::string* dynamicString = new std::string;

    // Prompt the user for input
    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInt;

    std::cin.ignore(); // Clear newline character from the buffer

    std::cout << "Enter a string: ";
    std::getline(std::cin, *dynamicString);

    // Output the values
    std::cout << "\nYou entered:\n";
    std::cout << "Integer: " << *dynamicInt << std::endl;
    std::cout << "String: " << *dynamicString << std::endl;

    // Free the dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
