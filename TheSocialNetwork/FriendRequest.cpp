#include "FriendRequest.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "User.hpp"
#pragma once


void friendRequest::statuschange(){
        statuscheck();
        
        cout<<"New status: ";
        cin>>status;
        cout<<endl;
    }

void friendRequest::statuscheck(){
        cout<<"Current status: ";
        if (status==0) cout<<"pending"<<endl;
        else if (status==1)cout<<"accepted"<<endl;
        else  cout<<"rejected"<<endl;
    }
    
    friendRequest::friendRequest(user A, user B) {
        
    };


