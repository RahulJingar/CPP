#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>investType = {
        {"stocks",10},
        {"bonds",5},
        {"real estate",8},
        {"mutual fund",7},
        {"gold",6},
        {"cryptoCurrency",15},
        {"fixed deposit",4},
        {"saving account",2},
        {"ETFs",9},
        {"commodities",6}
    } ;
    cout<<"investment Type:"<<endl;
    for (auto it:investType)
    {
        cout<<it.first<<":"<<it.second<<endl;
    }
    return 0;
}