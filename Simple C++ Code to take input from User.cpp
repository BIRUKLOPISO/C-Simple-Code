#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // Prompt the user for their name
    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    // Prompt the user for their age
    std::cout << "How old are you? ";
    std::cin >> age;

    // Display the user's name and age
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}