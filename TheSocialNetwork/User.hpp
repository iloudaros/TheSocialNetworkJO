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
    std::vector<friendRequest> reqrec;
    std::vector<friendRequest> reqsent;

public:
     std::vector<message> posts;

     std::vector<user*> friendlist;

     static std::vector<user> userlist;
    
    
    
    user();//ready
    user(std::string,std::string,std::string);//ready
    user* setuser();//ready


    void sentrequestto(user&);//ready

    void accept(int);//ready
    void acceptplain(int);//ready
    
    void reject(int);//ready
    
    void showrequests();//ready
    

    void postto(user&);//ready
    
    void postto(user& A,std::string text);//ready

    void like(int,user*);//ready
    
    

    void showfriends();//ready
    
    void remfriend(int);//ready

    
    
    std::string getname();//ready

    void setname(std::string);//ready

    std::string getpassword();//ready
    
  
    std::string getemail();//ready

    void setemail(std::string);//ready
    
     void showwall();//ready
};
