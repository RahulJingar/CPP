#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>vehicle = {
        "Sedan",
        "SUV",
        "Hatchback",
        "truck",
        "motorcycle",
        "electric car",
        "hybrid car",
        "minivan",
        "coupe",
        "convertible"
    };
    vector<int>km = {
        15,
        12,
        18,
        8,
        40,
        120,
        25,
        14,
        16,
        13
    };
    cout<<"Vehicle Type:-"<<endl;
    for(int i=0;i<km.size();i++)
    {
        cout<<vehicle[i]<<":"<<km[i]<<endl;
    }
    return 0;
}