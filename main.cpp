#include <iostream>
#include <string>
#include <conio.h>

void update_display(const std::string& typed_text, const std::string& text_to_type, const char char_typed) {
    system("cls"); // Clear the console screen
    std::cout << "Text to type: " << text_to_type << std::endl;

    char correct_char = text_to_type[typed_text.length()];

    if (char_typed == correct_char) {
        std::cout << "Correct character typed: '" << char_typed << "'" << std::endl;
    } else {
        std::cout << "Incorrect character typed: '" << char_typed << "', expected: '" << correct_char << "'" << std::endl;
    }

    std::cout << "Typed text: " << typed_text << std::endl;
}

int main() {
    

    std::string text_to_type;

    std::cout << "Enter the text you want to pratice typing" << std::endl;

    getline(std::cin, text_to_type);

    std::string typed_text;
    
    while (typed_text.length() < text_to_type.length()) {
        //std::cout << "\033[1mBOLD TEXT\033[0m" << std::endl;
        std::cout << "Press any key: ";
        char ch = _getch(); // Waits for a key press, no Enter neededv

        typed_text += ch;

        update_display(typed_text, text_to_type);
    };

    return 0;
}