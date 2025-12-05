#include <iostream>
#include <string>
#include <algorithm>

bool checkPalindrome(std::string checked_string)
{
    bool isPalindrome = true;
    for(int i = checked_string.size(); i>checked_string.size()/2 ; i--)
    {
        if(checked_string[checked_string.size()-i] != checked_string[i-1])
        {
            isPalindrome = false;
        }
    }
    return isPalindrome;
}

int main (){
    std::string word;
    std::cout << "Enter a string : ";
    std::cin >> word;
    std::cout << "\nEntered word is ";
    if(!checkPalindrome(word))
    {
        std::cout << "not ";
    }
    std::cout << "a palindrome.";
}