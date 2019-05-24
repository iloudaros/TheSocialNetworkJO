#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

#include "FriendRequest.h"
#include "Message.h"



class User {
    
private:
    string email;
    string name;
    vector<User*> friendlist;
    vector<FriendRequest*> reqrec;
    vector<FriendRequest*> reqsent;
    Wall wall;
    
public:
    void sentrequest(User senter,User receiver);
    FriendRequest
    
    
    void checkrequests();
    
    
    
    void remfriend();
    
    
    
    void post(Wall a);
    
    
    
    void like(Message a);
    
    
    
    void friends();
    
    
    
    void getname();
    
    void setname();
    
    
    
    void getemail();
    
    void setemail();
};


