#pragma once

#include "User.hpp"

#include <string>
#include <ctime>


class user;


class friendRequest//ready

{
 private:
    user* sender;
    user* receiver;
    int status;
    time_t timestamp;
    
 public:
    void statuschange();//ready
    
    void statuscheck();//eady
    
    friendRequest(user&,user&);//ready
    
    friendRequest();//ready
    
    user* getsender();//ready
    
    std::string gettime();//ready
};
