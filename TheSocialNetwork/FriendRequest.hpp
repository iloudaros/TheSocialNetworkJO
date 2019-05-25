#pragma once
#include "User.hpp"
#include <string>
#include <ctime>


class user;


class friendRequest {
private:
    user* senter;
    user* receiver;
    int status;
    std::string text;
    time_t timestamp;
    
public:
    void statuschange();
    
    void statuscheck();
    
    friendRequest(user* ,user* );
};
