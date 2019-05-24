#include <ctime>
#include <string>
//#pragma once

using namespace std;

class message
{   
 private :
 	
 	
    tm date;
    string message;
    user sender;
    user receiver;
    string response;
    int likes;
    
    
    
    public :
    

    message(user A,user B);
    void toString();
}

