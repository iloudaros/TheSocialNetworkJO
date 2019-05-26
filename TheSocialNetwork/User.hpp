
#pragma once
#include "FriendRequest.hpp"
#include "Wall.hpp"
#include <iostream>
#include <vector>


class friendRequest;

class user {

private:
   
    std::string email;
    std::string name;
    std::string password;
    std::vector<user*> friendlist;
    std::vector<friendRequest> reqrec;
    std::vector<friendRequest> reqsent;
    wall mywall;

public:
    
     static std::vector<user> userlist;
    
    
    
    user();//ready
    user(std::string,std::string,std::string);//ready
    user* setuser();//ready


    void sentrequestto(user&);//ready


    void post();


    void like();


    void friends();
    
    
    void remfriend();

    
    
    std::string getname();

    void setname();

    
  
    std::string getemail();

    void setemail();
};
