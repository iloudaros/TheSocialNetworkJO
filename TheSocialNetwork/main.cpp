#include "User.hpp"
#include "FriendRequest.hpp"
#include "Message.hpp"
#include "Initialize.hpp"

using namespace std;


int main()

{
    initialization::inibasic();
   
    
    cout<<"Welcome to the most fabulous social media ever made."<<endl;
    
   user* currentlyin=nullptr;//Εδώ αποθηκεύεται ο χρήστης που είναι συνδεδεμένος
   int choice;//γενικής χρήσης μεταβλητή, την χρησιμοποιούμε συχνά πυκνά
   user newuser;//Εδώ αποθηκεύεται προσωρινά ένας χρήστης ενώ δημιουργείται, πρωτού εκχωρηθεί στο σύστημα

    
    
    //Αρχική οθόνη, διαχειρίζεται το login και το registration, εκτελούνται έλεγχοι του κατα πόσο χρησιμοποιούνται παραπάνω από μια φορά emails.
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
        
        
        for(i=0;i<user::userlist.size();i++)
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
            if (user::userlist[position].getpassword()!=lpassword) cout<< "Incorrect password.(Our security is impenetrable.)\n(To exw pathei kai se sxesh.) \n Try again:\n";
            
            
        }while(lpassword!=user::userlist[position].getpassword());
        
        
        currentlyin=&(user::userlist[position]);
    }
    
    else if (choice==2) {
    
    
        newuser.setuser();
        user::userlist.push_back(newuser);
        currentlyin=&(user::userlist[user::userlist.size()-1]);
    };
    
    
    
    
    //Σε αυτό το σημείο κάποιος χρήστης είναι συνδεδεμένος και έτοιμος να χρησιμοποιήσει το πρόγραμμα
    
    
    
    
    do{
    cout<< "\n\nLogged in as:"<<currentlyin->getname();
    cout<<"\n\n1. See your wall\n2. See friend's wall\n3. Send friend request\n4. Accept/Reject friend request\n5. See my friends\n6. Back\n7. Log out\n8. Exit\nPress the number of your choice:";
    
    cin>>choice;
    
    switch (choice) {
        case 1://Ο χρήστης βλέπει τον τοίχο του
            currentlyin->showwall();
            break;
            
            
            
            
            
            
            
            
        case 2://Ο χρήστης βλέπει μια λίστα με τους φίλους του, μετά επιλέγει έναν από αυτούς και βλέπει τον τοίχο του
            int i;
            for(i=0;i<currentlyin->friendlist.size();i++)
                cout<<i+1<<". "<<currentlyin->friendlist[i]->getname()<<endl;
            cout<< "Choose the number of the friend you wanna stalk"<<endl;
            cin>>choice;
            currentlyin->friendlist[choice]->showwall();
        
            break;
            
            
            
            
            
            
            
            
            
        case 3://Ο χρήστης ψάχνει έναν άλλο χρήστη χρησιμοποιώντας το email ή το όνομα του, του παρουσιάζονται τα αποτελέσματα της αναζήτησης του και επιλέγει σε ποιον θα στείλει αίτημα φιλίας
        {
            cout<<"\nType a name or an email:";
            
            string temp;
            getline(cin,temp);
            getline(cin,temp);
            
            
            int check=0;
            
            vector<user*> resultuser;
            choice=0;
            
            cout<< "\n\n\t\t\t-----Results-----\n\n";
            
            
            if (user::userlist.size()==0)cout<<"\nYou are all alone darling\n";
            
                else{
                        for(i=0;i<user::userlist.size();i++)
                            {
                                if ( (user::userlist[i].getname()==temp) | (user::userlist[i].getemail()==temp) )
                                {
                                    choice++;
                                    cout<<choice<<"."<<user::userlist[i].getname()<<","<<user::userlist[i].getemail()<<endl;
                    
                                    resultuser.push_back(&user::userlist[i]);
                    
                                    check=1;
                    
                                }
                            }
            
                    if(check==0)cout<<"\nNo results\n";
                    else
                    {
                        cout<<"\nChoose a number:";
                        cin>>choice;
                        currentlyin->sentrequestto(*resultuser[choice-1]);
                        cout<<"\nRequest sent to:"<<resultuser[choice-1]->getname();
                    }
                }
            resultuser.clear();
        }
            
            break;
            
            
            
            
            
            
            
            
        case 4://Ο χρήστης διαχειρίζεται τα αιτήματα φιλίας του
            
            currentlyin->showrequests();


            break;
            
            
            
            
            
            
            
            
        case 5://Ο χρήστης βλέπει την λίστα φίλων του

            currentlyin->showfriends();
            
            break;
            
            
            
            
            
            
            
            
        case 6:cout<<"\nThis is the very start, there is nothing back there, just some code\n";
            
            break;
            
            
            
            
            
            
            
            
        case 7:
            cout<<"Thaaank you, next! <3\n\n";
            currentlyin = nullptr;
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
                    if (user::userlist[position].getpassword()!=lpassword) cout<< "Incorrect password.(Our security is impenetrable.)\n(To exw pathei kai se sxesh.) \n Try again: \n";
                    
                    
                }while(lpassword!=user::userlist[position].getpassword());
                
                
                currentlyin=&(user::userlist[position]);
            }
            
            else if (choice==2) {
                
                
                newuser.setuser();
                user::userlist.push_back(newuser);
                currentlyin=&(user::userlist[user::userlist.size()-1]);
            };
           
            break;
            
            
            
            
            
            
            
            
            
            
        case 8:
            cout<<"Goodbye beautiful ;)\n\n";
            break;
            
            
        default:
            cout<<"\n\nYou have to choose something hun\n\n";
            break;
    }
    }while(choice<8&choice>0);
}

