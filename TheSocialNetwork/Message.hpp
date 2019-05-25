#pragma once
#include <ctime>
#include <string>
#include "User.hpp"

class user;

class message

{   
 private :
 	
    tm date;
    string text;
    user* sender;
    user* receiver;
    string response;
    int likes;
    
    
    
    public :
    

    message(user&,user&);
    void toString();
};
