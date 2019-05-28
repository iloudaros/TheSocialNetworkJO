#pragma once

#include "User.hpp"
#include "Message.hpp"

#include <iostream>
#include <vector>
#include <string>

class message;

class wall{

private:
    user* owner;
    std::vector<message> posts;
public:
    
    wall();
    void showwall();
};
