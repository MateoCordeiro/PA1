//**********************************
// PA         : 1
// Q          : 2
// Programmer : Mateo Cordeiro
// Status     : Completed
// Date       : 02/28/23
//
//**********************************

#include<iostream> // cout
#include<iomanip> // setw
#include<cmath> // log
#include<time.h> // time
using namespace std;

int main() 
{
    srand((unsigned)time(NULL));

    float totalTime;
    float server1FailTime = 0;
    float server2FailTime = 0;
    server1FailTime = -500.0 * log((float)rand() / RAND_MAX);
    server2FailTime = -500.0 * log((float)rand() / RAND_MAX);
    float server1TotalTime = server1FailTime;
    float server2TotalTime = server2FailTime;

    float clock = 0;
    int crash = 0;

    while (server1TotalTime || server2TotalTime < (24 * 365 * 20))
    {
        if (abs(server1FailTime-server2FailTime) <= 10 || abs(server2FailTime-server1FailTime) <= 10)
        {
            cout << "ABSOLUTE FAILURE";
            break;
        }
        else
        {
            
        }
    }
}