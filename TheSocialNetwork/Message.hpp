#pragma once
#include <ctime>
#include <string>
#include "User.hpp"


using namespace std;

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
