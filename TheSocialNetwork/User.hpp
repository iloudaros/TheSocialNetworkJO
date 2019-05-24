#include <iostream>
#include <string>
#include <vector>
#include "FriendRequest.hpp"
//#pragma once

using namespace std;


class user {
    
private:
    string email;
    string name;
    vector<user*> friendlist;
    vector<friendRequest*> reqrec;
    vector<friendRequest*> reqsent;
    wall wall;
    
public:
	
    void sentrequest(user sender,user receiver);
   
    
    
    void checkrequests();
    
    
    
    void remfriend();
    
    
    
    void post(wall a);
    
    
    
    void like(message a);
    
    
    
    void friends();
    
    
    
    void getname();
    
    void setname();
    
    
    
    void getemail();
    
    void setemail();
};
