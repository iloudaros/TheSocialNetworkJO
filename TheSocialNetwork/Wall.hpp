#pragma once


#include "User.hpp"
#include "Message.hpp"
#include <iostream>
#include <vector>
#include <string>

class user;
class message;

class wall{

private:
    user* owner;
    std::vector<message> posts;
    std::vector<user*> canpost;
public:
    
    
    
    
    
};
