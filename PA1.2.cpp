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
    float server1FailTime = -500.0 * log((float)rand() / RAND_MAX);
    float server2FailTime = -500.0 * log((float)rand() / RAND_MAX);
    float server1TotalTime = server1FailTime;
    float server2TotalTime = server2FailTime;

    int crash = 0;

    while (server1TotalTime || server2TotalTime < (24 * 365 * 20))
    {
        if (abs(server1TotalTime-server2TotalTime) <= 10 || abs(server2TotalTime-server1TotalTime) <= 10)
        {
            cout << "ABSOLUTE FAILURE : Server 1 crash at " << server1TotalTime << " | Server 2 crashed at " << server2TotalTime;
            break;
        }
        else
        {
            if (server1TotalTime < server2TotalTime)
            {
                crash += 1;
                cout << "Crash: " << crash << " | Server 1 crash at: " << server1TotalTime << "\n";
                server1TotalTime += 10;
                server1FailTime = -500.0 * log((float)rand() / RAND_MAX);;
                server1TotalTime += server1FailTime;
            }
            if (server2TotalTime < server1TotalTime)
            {
                crash += 1;
                cout << "Crash: " << crash << " | Server 2 crash at: " << server2TotalTime << "\n";
                server2TotalTime += 10;
                server2FailTime = -500.0 * log((float)rand() / RAND_MAX);;
                server2TotalTime += server2FailTime;
            }
        }
    }
}