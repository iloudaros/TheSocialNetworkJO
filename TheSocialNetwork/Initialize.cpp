

#include "Initialize.hpp"

auto &userlist =  user::userlist;

void initialization::inibasic(){
    
    {
    user newuser("John Loudaros","johnloudaros@hotmail.com","123456");
    userlist.push_back(newuser);
    }
    
    {
    user newuser("Orestis Spyridakis","ore@kwloxwri.com","123456");
    userlist.push_back(newuser);
    }
    
    {
        user newuser("Koula Koulitsa","koulak@kotetsi.kot","123456");
        userlist.push_back(newuser);
    }
    
    userlist[1].sentrequestto(userlist[0]);
    userlist[0].acceptplain(1);
    
    
    userlist[1].postto(userlist[0],"Hey there,I am the first post on your wall :)");
    
    userlist[1].like(1, &userlist[0]);
    
    
    
    userlist[2].sentrequestto(userlist[0]);
    userlist[0].acceptplain(1);
    
    userlist[2].postto(userlist[0],"Mou aresoun oi kotes <3");
    
    
}
