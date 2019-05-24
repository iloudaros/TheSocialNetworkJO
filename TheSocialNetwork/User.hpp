#include <iostream>
#include <string>
#include <vector>

using namespace std;
//#pragma once


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
