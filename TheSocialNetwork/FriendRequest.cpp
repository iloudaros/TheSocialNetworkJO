#include "FriendRequest.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "User.hpp"

using std::endl;

void friendRequest::statuschange()

    {
        statuscheck();
        
        std::cout<<"New status: ";
        std::cin>>status;
        std::cout<<endl;
    }



void friendRequest::statuscheck()

    {
        std::cout<<"Current status: ";
        if (status==0) std::cout<<"pending"<<endl;
        else if (status==1)std::cout<<"accepted"<<endl;
        else  std::cout<<"rejected"<<endl;
    }



    
    friendRequest::friendRequest(user* A, user* B) {
        
    };


