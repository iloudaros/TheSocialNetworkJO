#include <ctime>
#include <string>
#include "User.hpp"
#pragma once

using namespace std;

class message
{   
 private :
 	
 	
    tm date;
    string text;
    user sender;
    user receiver;
    string response;
    int likes;
    
    
    
    public :
    

    message(user A,user B);
    void toString();
};

