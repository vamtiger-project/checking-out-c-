#include <iostream>

bool isVowel(char letter) {
    switch(letter) {
        case 'A': case 'a': case 'E': case 'e': case 'I': case 'i':
        case 'O': case 'o': case 'U': case 'u':
            return true;
            break;
        default: 
            return false;
    }
}

int main() {
    std::string sentence;
    char letter;
    int numVowels = 0, index;

    std::cout << ">> Enter a sentence: ";
        std::getline(std::cin, sentence);

    for (index = 0; index < sentence.size(); index ++) {
        letter = sentence[index];

        if (isVowel(letter)) {
            std::cout << "'" << letter << "' is a vowel." << std::endl;
        } else {
            std::cout << "'" << letter << "' is not a vowel." << std::endl;
        }
    }
}