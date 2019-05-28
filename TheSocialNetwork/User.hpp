#pragma once


#include "FriendRequest.hpp"
#include "Message.hpp"

#include <iostream>
#include <vector>

class friendRequest;
class message;

class user {

private:
   
    std::string email;
    std::string name;
    std::string password;
    std::vector<user*> friendlist;
    std::vector<friendRequest> reqrec;
    std::vector<friendRequest> reqsent;
    std::vector<message> posts;

public:
    
     static std::vector<user> userlist;
    
    
    
    user();//ready
    user(std::string,std::string,std::string);//ready
    user* setuser();//ready


    void sentrequestto(user&);//ready

    void accept(int);//ready
    
    void reject(int);//ready

    void postto(user&);

    void like(message&);

    void showfriends();
    
    void remfriend(user&);

    
    
    std::string getname();//ready

    void setname(std::string);//ready

    std::string getpassword();//ready
    
  
    std::string getemail();//ready

    void setemail(std::string);//ready
    
     void showwall();//ready
};
