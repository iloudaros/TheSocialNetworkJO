#include <iostream>
#include <string>
#include <ctime>
#pragma once
using namespace std;

class message
{
    /*
     struct tm
     {
     int tm_sec;
     int tm_min;
     int tm_hour;
     int tm_mday;
     int tm_mon;
     int tm_year;
     }
     */
    private :
    tm date;
    string message;
    string user;
    string response;
    int likes;
    
    public :
    
    
    
    void post()
    {
        cout << "Give me your user name." << endl;
        cin >> user;
        cout << "Write a message." << endl;
        cin >> message;
    };
    
    void toString()
    {
        time_t curr_time;
        curr_time = time(NULL);
        char *tm = ctime(&curr_time);
        cout << "Today is : " << tm << endl;
        
        
        cout <<  <<
    }
    
}

