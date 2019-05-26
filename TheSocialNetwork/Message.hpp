#pragma once


#include "User.hpp"
#include <ctime>
#include <string>
#include <vector>

class user;

class message

{   
 private :
 	
    tm date;
    std::string text;
    user* sender;
    user* receiver;
    std::string response;
    int likes;
    std::vector<user*> likedby;
    
    
    
    public :
    

    message(user&,user&);
    void toString();
};
