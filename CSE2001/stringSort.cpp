#include <iostream>
#include <string>

int main() {
    std::string input_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);

    int len = input_string.length();
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (input_string[i] > input_string[j]) {
                char temp = input_string[i];
                input_string[i] = input_string[j];
                input_string[j] = temp;
            }
        }
    }

    std::cout << "The string in alphabetical order is: " << input_string << std::endl;

    return 0;
}