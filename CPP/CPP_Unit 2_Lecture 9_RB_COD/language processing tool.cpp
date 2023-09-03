#include <iostream>
#include <cctype>

int main() {
    char text[1000];
    std::cin.getline(text, sizeof(text));

    int consonantCount = 0;
    char* word = text;

    while (*word) {
        while (*word && !std::isalpha(*word)) {
            word++;
        }

        while (*word && std::isalpha(*word)) {
            char ch = std::tolower(*word);
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                consonantCount++;
            }
            word++;
        }
    }

    std::cout << consonantCount << std::endl;

    return 0;
}
