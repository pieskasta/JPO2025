#include <iostream>
#include <string>
#include <algorithm>

int main ()
{   
    unsigned int charcounter = 0;
    char character;
    std::cout << "Enter a Sentece:";
    std::string input;
    std::cin >> input;
    for(int i = 0; i<input.size();i++)
    {
        if(isupper(input[i]))
        input[i] = std::tolower(input[i]);
    }
    std::cout << "Enter a character you want to sort by:";
    std::cin >> character;
    character = std::tolower(character);
    for(int i = 0; i<input.size();i++)
    {
        if(input[i] == character)
        {
            charcounter++;
        }
    }
    std::cout << "There are " << charcounter<< " " << character << "'s in typed sentece.";
}