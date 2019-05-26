#pragma once
#include "User.hpp"
#include <string>
#include <ctime>


class user;


class friendRequest {
private:
    user* sender;
    user* receiver;
    int status;
    time_t timestamp;
    
public:
    void statuschange();
    
    void statuscheck();
    
    friendRequest(user&,user&);
    
    friendRequest();
};
