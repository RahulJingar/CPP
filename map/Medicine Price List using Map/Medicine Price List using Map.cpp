#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>Medicine = {
        {"Antibiotic",500},
        {"Painkiller",250},
        {"Antacid",150},
        {"Antihistamine",100},
        {"Antidepressant",300},
        {"Antiviral",400},
        {"Anti-inflammatory",200},
        {"Vaccine",0.5},
        {"Insulin",40},
        {"Sedative",50}
    };
    cout<<"Medicine Type:-"<<endl;
    for(auto it:Medicine)
    {
        cout<<it.first<<":"<<it.second<<endl;
    }
    return 0;
}