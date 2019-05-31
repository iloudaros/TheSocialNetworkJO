#pragma once


#include "User.hpp"

#include <ctime>
#include <string>
#include <vector>

class user;

class message

{   
 private :
 	
    time_t date;
    std::string text;
    user* sender;
    user* receiver;
    std::string response;
    int likes=0;
    
    
    
    
    
    public :
    std::vector<user*> likedby;
    std::vector<message> replies;


    message(user&,user&);//ready
    void toString(int);//ready
    void like(user*);//ready
    void reply(user*);//ready
    
};
