#include "User.hpp"
#include "FriendRequest.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using std::endl;

void friendRequest::statuschange()//ready

    {
        statuscheck();
        
        std::cout<<"New status: ";
        std::cin>>status;
        std::cout<<endl;
        
        statuscheck();
    }



void friendRequest::statuscheck()//ready

    {
        std::cout<<"Current status: ";
        if (status==0) std::cout<<"pending"<<endl;
        else if (status==1)std::cout<<"accepted"<<endl;
        else  std::cout<<"rejected"<<endl;
    }




    friendRequest::friendRequest(){};

    
    friendRequest::friendRequest(user& A, user& B)//ready

    {
        sender= &A;
        receiver= &B;
        timestamp= time(NULL);
        
    }


