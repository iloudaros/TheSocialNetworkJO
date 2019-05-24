#include "FriendRequest.hpp"


#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "User.hpp"
#pragma once

class friendRequest {
    
private:
    user senter;
    user receiver;
    int status;
    string text;
    time_t timestamp;
    
public:
    void statuschange(){
        this->statuscheck();
        
        cout<<"New status: ";
        cin>>status;
        cout<<endl;
    }
    
    void statuscheck(){
        cout<<"Current status: ";
        if (status==0) cout<<"pending"<<endl;
        else if (status==1)cout<<"accepted"<<endl;
        else  cout<<"rejected"<<endl;
    }
    
    friendRequest(user senter, user receiver) {
        
    }
};

