
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>vehicle = {
      {"Sedan",15},
      {"SUV",12},
      {"Hatchback",18},
      {"truck",8},
      {"motorcycle",40},
      {"electric car",120},
      {"hybrid car",25},
      {"minivan",14},
      {"coupe",16},
      {"convertible",13},
    };
    cout<<"Vehicle Type:-"<<endl;
    for(auto it:vehicle)
    {
        cout<<it.first<<":"<<it.second<<endl;
    }
    return 0;
}
