#include <iostream>
#include <vector>
#include "FriendRequest.hpp"
#include "Wall.hpp"
#pragma once
using namespace std;



class user {
    
private:
    string email;
    string name;
    vector<user*> friendlist;
    vector<friendRequest> reqrec;
    vector<friendRequest> reqsent;
    wall mywall;
    
public:

    void sentrequest(user,user);


    void checkrequests();
    
    
    
    void remfriend();
    
    
    
    void post();
    
    
    void like();
    
    
    
    void friends();
    
    
    
    void getname();
    
    void setname();
    
    
    
    void getemail();
    
    void setemail();
};
