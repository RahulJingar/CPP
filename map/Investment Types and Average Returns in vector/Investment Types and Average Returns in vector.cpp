#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>investType ={
        "stocks",
        "bonds",
        "real estate",
        "mutual funds",
        "gold",
        "cryptocurrency",
        "fixed deposit",
        "saving account",
        "ETFs",
        "Commodies"
    };
    vector<int>average = {
        10,5,8,7,6,15,4,2,9,6
    };
    cout<<"Investment Type:"<<endl;
    for(int i=0;i<average.size();i++)
    {
        cout<<investType[i]<<"\t\t\t\t"<<average[i]<<endl;
    }
    return 0;
}