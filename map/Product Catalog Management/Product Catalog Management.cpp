#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>productName = {
        "laptop","smartphone",
        "headphones","charger",
        "smartWatch","tablet",
        "camera","lens",
        "smart speaker","router"
    };
    vector<string>categories = {
        "computer","mobile",
        "accessories","accessories",
        "waerables","computer",
        "photography","photography",
        "home electronics","networking"
    };
    vector<float>rating = {
        4.5,4.2,
        4.8,4.0,
        4.3,4.6,
        4.7,4.3,
        4.6,4.1
    };
    vector<int>stock = {
        50,100,
        200,150,
        75,60,
        40,30,
        120,80
    };
    cout<<"productName:-"<<endl;
    for(int i=0;i<rating.size();i++)
    {
        cout<<productName[i]<<"\t\t\t\t"<<categories[i]<<" \t\t\t\t"<<rating[i]<<" \t\t\t\t"<<stock[i]<<endl;
    }
    return 0;
}