#include "User.hpp"
#include "FriendRequest.hpp"
#include "Message.hpp"
#include "User.hpp"
#include "Wall.hpp"

using namespace std;

int main()

{
    
   
    
    cout<<"Welcome to the most fabulous social media ever made."<<endl;
    
    
   int choice;
   user newuser;
   user* currentlyin;
    
   do{ cout<<"Do you wanna login(1) or create an account(2)?";
       cin>>choice;
       if (choice !=1 & choice != 2) cout<<"You only have two choices hun, it's not _that_ difficult :) \n";
   }while(choice !=1 & choice != 2);
    
    
    if (choice==1){
        
        int i;
        string lemail;
        int check=0;
        int position;
        
        cout<<"Give me your email:";

        do{
        cin>>lemail;
        
        
        for(i=0;i!=user::userlist.size();i++)
            if (user::userlist[i].getemail()==lemail)
            {
                check=1;
                position=i;
                break;
            }
            else {
                 cout<<"\n\nThere is no user with that email.Try something else.\n\n";
            }
        }while(check!=1);
        
        
        
        cout<<"Give me your password:";
        string lpassword;

        do{
            
        cin>>lpassword;
            if (user::userlist[position].getpassword()!=lpassword) cout<< "Incorrect password.(Our security is impenetrable.)(To exw pathei kai se sxesh.) /n Try again: /n";
            
            
        }while(lpassword!=user::userlist[position].getpassword());
        
        
        currentlyin=&(user::userlist[position]);
    }
    
    else if (choice==2) {
    
    
        newuser.setuser();
        user::userlist.push_back(newuser);
    };
    
    
    
    
    do{
    cout<< "\n\nLogged in as:"<<currentlyin->getname();
    cout<<"\n\n1. See your wall\n2.See friend's wall\n3.Send friend request\n4.Accept/Reject friend request\n5.See my friends\n6.Back\n7.Log out\n8.Exit\nPress the number of your choice:";
    
    cin>>choice;
    
    switch (choice) {
        case 1:
            //see your wall
            break;
            
            
        case 2:
            //see friend's wall
            break;
            
            
        case 3:
            //send friend request
            break;
            
            
        case 4:
            //accept/reject
            break;
            
            
        case 5:
            //See my friends
            break;
            
            
        case 6:
            //Back
            break;
            
            
        case 7:
            cout<<"Thaaank you, next! <3\n\n";

           
            break;
            
            
        case 8:
            cout<<"Goodbye beautiful ;)\n\n";
            system("pause");
            break;
            
            
        default:
            cout<<"\n\nYou have to choose something hun\n\n";
            break;
    }
    }while(choice<8&choice>0);
}

