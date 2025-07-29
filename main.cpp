#include <iostream>
#include <string>
#include <conio.h>

int main() {
    

    std::string text_to_type;

    std::cout << "Enter the text you want to pratice typing" << std::endl;

    std::cin >> text_to_type;

    std::string typed_text;
    
    while (typed_text.length() < text_to_type.length()) {

        std::cout << "\033[1mBOLD TEXT\033[0m" << std::endl;
        std::cout << "Press any key: ";
        char ch = _getch(); // Waits for a key press, no Enter neededv

        typed_text += ch;
    };

    return 0;
}