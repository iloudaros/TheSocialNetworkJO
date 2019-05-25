
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
    std::vector<user*> friendlist;
    std::vector<friendRequest> reqrec;
    std::vector<friendRequest> reqsent;
    wall mywall;

public:

    void sentrequest(user,user);


    void checkrequests();



    void remfriend();



    void post();


    void like();



    void friends();



    std::string getname();

    void setname();



    std::string getemail();

    void setemail();
};
