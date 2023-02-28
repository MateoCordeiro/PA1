//**********************************
// PA         : 1
// Programmer : Mateo Cordeiro
// Status     : WIP
// Date       : 02/28/23
//
//**********************************

#include<iostream>
#include<cstdlib>
#include<ctime>

int main() 
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i <+ 100; ++i)
    {
        std::cout << std::rand() << "\t";

        if (i % 5 == 0)
        {
            std::cout << "\n";
        }
        
    }
    return 0;
}