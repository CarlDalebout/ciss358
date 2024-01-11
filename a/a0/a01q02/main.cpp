#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include "TokenList.h"
int main()
{
    // std::string input;
    // std::getline(std::cin, input);
    // std::string seperators = " \t,";
    // TokenList tokens(input, seperators);
    // int size = std::stoi(tokens[0]);
    srand(time(NULL));
    // int size = rand()%19 + 1;
    int size = 3;
    int elements[size];
    std::string dir = "";
    std::cout << size << " {";
    for(int i = 0; i < size; ++i)
    {
        elements[i] = rand()%3 + 1;
        // elements[i] = std::stoi(tokens[i]);
        std::cout << dir << elements[i]; dir = ", ";
    }
    std::cout << "}\n";
    
    return 0;
}