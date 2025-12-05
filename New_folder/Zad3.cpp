#include <iostream>
#include <string>
#include <algorithm>

bool checkPalindrome(std::string checked_string)
{//dla parzystych
    bool isPalindrome = 1;
    int k = 0;
    for(int i = checked_string.size(); i>checked_string.size()/2 ; i--){
        if(checked_string[k] != checked_string[i-1])
        {
            isPalindrome = 0;
        }
        k++;
    }
    return isPalindrome;
}

int main (){
    std::string word;
    std::cout << "Enter a string : ";
    std::cin >> word;
    std::cout << "\nEntered word is ";
    if(!checkPalindrome(word))
    std::cout << "not ";
    std::cout << "a palindrome.";
}