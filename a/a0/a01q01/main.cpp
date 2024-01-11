#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include "TokenList.h"

void computeMinimalN2(int array[], int size)
{
    if(size == 2)
    {
        std::cout << abs(array[0]-array[1]) << ' ' << 0 << ' ' << 1 << '\n';
    }
    else
    {
        int start = 0;
        int end = 1;
        int difference = abs(array[start] - array[end]);
        for(int i = 0; i < size; ++i)
        {
            int startTemp = array[i]; 
            for(int j = i+1; j < size; ++j)
            {
                int endTemp = array[j];
                if(abs(startTemp - endTemp) < difference)
                {
                    start = i;
                    end = j;
                    difference = abs(startTemp-endTemp);
                }
            }
        }
        std::cout << difference << ' ' << start << ' ' << end << '\n';
    }
}

void computeMinimal(int array[], int size)
{
    int i;
    int j;
    int difference;
    if(size > 3)
    {
        i = 0;
        j = 1;
        difference = abs(array[i]-array[j]);
        for(int k = 2; k < size; ++k)
        {
            int temp = array[k];
            if(abs(i - temp) < abs(i-j))
            {
                j = temp;
                difference = abs(i-j);
            }
            else if(abs(j-temp) < abs(i-j))
            {
                i = j;
                j = temp;
                difference = abs(i-j);
            }
            std::cout << "checking elements[" << k << "]\n";
        }
    }
    else if(size == 2)
    {
        i = array[0];
        j = array[1];
        difference = abs(i-j);
    }
    std::cout << difference << ' ' << i << ' ' << j << '\n';
}

int main()
{
    // std::string input;
    // std::getline(std::cin, input);
    // std::string seperators = " \t,";
    // TokenList tokens(input, seperators);
    // int size = std::stoi(tokens[0]);
    srand(time(NULL));
    int size = rand()%18 + 2;
    int elements[size];
    std::string dir = "";
    std::cout << size << " {";
    for(int i = 0; i < size; ++i)
    {
        elements[i] = rand()%42 + 2;
        // elements[i] = std::stoi(tokens[i]);
        std::cout << dir << elements[i]; dir = ", ";
    }
    std::cout << "}\n";
    computeMinimalN2(elements, size);
    
    return 0;
}