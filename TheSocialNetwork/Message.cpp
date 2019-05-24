#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class Message
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
    user sender;
    user receiver;
    string response;
    int likes;
    
    public :
    
    cout << "Do you want to reply to the message?" << endl;
    
    void post()
    {
        cout << "Write a message." << endl;
        cin >> message;
        
        time_t curr_time;
        curr_time = time(NULL);
        char *tm = ctime(&curr_time);
    }
    void toString()
    {
        cout << tm << endl;
        
		cout << user.sender << endl;
		
    }
    
}

