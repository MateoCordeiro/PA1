//**********************************
// PA         : 1
// Programmer : Mateo Cordeiro
// Status     : WIP
// Date       : 02/28/23
//
//**********************************

#include<iostream>
#include<tuple>
#include<math.h>
using namespace std;

int main() 
{
    // tuple<unsigned int, unsigned int, unsigned int> list;
    // list = make_tuple(01, 100, 100);
    // cout << get<0>(list);

    int processID = 1;
    float ArrivalTime;
    float ServiceTime;

    for (int i = 0; i < 1000; i++)
    {
        ArrivalTime = ((-(1/2)) * (log(rand())));

        cout << processID << "   " << ArrivalTime << "   " << ServiceTime << "\n";
    }
    
}