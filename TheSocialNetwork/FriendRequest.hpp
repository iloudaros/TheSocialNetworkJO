#pragma once
#include "User.hpp"


class user;


class friendRequest {
private:
    user* senter;
    user* receiver;
    int status;
    string text;
    time_t timestamp;
    
public:
    void statuschange();
    
    void statuscheck();
    
    friendRequest(user* ,user* );
};
