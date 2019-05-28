#include "Wall.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


wall::wall(){};




void wall::showwall()
{
    int i;
    cout<< owner->getname();
    
    for(i=0;i<posts.size();i++)
    {
        cout<< posts[i].toString();
   }
}
