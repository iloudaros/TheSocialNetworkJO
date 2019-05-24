//
//  User.cpp
//  TheSocialNetwork
//
//  Created by Γιάννης Λουδάρος on 24/05/2019.
//  Copyright © 2019 Γιαννης Λουδαρος. All rights reserved.
//

#include "User.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "FriendRequest.h"
#include "Message.h"
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
    void sentrequest(user senter,user receiver);
   
    
    
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


