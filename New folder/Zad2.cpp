#include <iostream>
#include <string>
#include <algorithm>
int main () {
    std::string word;
    std::string inversed_word;
    std::cout << "Enter a string : ";
    std::cin >> word;
    std::cout << "\n Reversed manually: ";
    for(int i = word.size(); i>=0 ; i--){
        inversed_word += word[i];
    }
    std::cout << inversed_word;
    std::reverse(word.begin(), word.end());
    std::cout << "\n Reversed with std::reverse:";
    std::cout << word;
    return 0;
}