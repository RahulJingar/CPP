#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>Course = {
        "Bachelor Degree",
        "Master Degree",
        "Diploma",
        "Certification",
        "Online Course",
        "PhD Program",
        "Bootcamp",
        "Associate Degree",
        "Internship",
        "Workshop"
    };
    vector<int>Average = {
        48,
        24,
        12,
        6,
        3,
        60,
        4,
        24,
        2,
        1  
    };
    cout<<"Course Type:-"<<endl;
    for(int i=0;i<Average.size();i++)
    {
        cout<<Course[i]<<":"<<Average[i]<<endl;
    }
    return 0;
}