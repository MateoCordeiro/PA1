//**********************************
// PA         : 1
// Programmer : Mateo Cordeiro
// Status     : WIP
// Date       : 02/28/23
//
//**********************************

#include<iostream>
#include<iomanip>
#include<cmath>
#include<time.h>

using namespace std;

int main() 
{
    int processID = 1;
    double arrivalTime = 0;

    srand((unsigned)time(NULL));
    
    for (int i = 0; i < 1000; i++)
    {
        double tempArrivalTime;
        tempArrivalTime = (-1.0/2.0) * (log((float)rand() / RAND_MAX));
        arrivalTime += tempArrivalTime;

        cout << left << setw(5) << processID 
             << left << setw(8) << setprecision(6) << arrivalTime 
             << left << setw(5) << tempArrivalTime 
             << "\n";
        processID++;
    }
}