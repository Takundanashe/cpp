#include <iostream>
#include <cstring>
#include <cctype>

// Function to count consonants in a word
int countConsonants(const char *word) {
    int count = 0;
    while (*word != '\0') {
        char c = *word;
        if (isalpha(c) && !strchr("AEIOUaeiou", c)) {
            count++;
        }
        word++;
    }
    return count;
}

int main() {
    const int maxInputSize = 1000;
    char input[maxInputSize];

    std::cout << "Enter a paragraph: ";
    std::cin.getline(input, maxInputSize);

    char *sentence = strtok(input, " \n\t");
    int totalConsonants = 0;

    while (sentence != nullptr) {
        int consonantCount = countConsonants(sentence);
        totalConsonants += consonantCount;

        sentence = strtok(nullptr, " \n\t");
    }

    std::cout << "Total consonants: " << totalConsonants << std::endl;

    return 0;
}
