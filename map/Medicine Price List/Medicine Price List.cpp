#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>medicine = {
        "Antibiotic",
        "Painkiller",
        "Antacid",
        "Antihistamine",
        "Antidepressant",
        "Antiviral",
        "Anti-inflammatory",
        "Vaccine",
        "Insulin",
        "Sedative"
    };
    vector<float>Average = {
        500,
        250,
        150,
        100,
        300,
        400,
        200,
        0.5,
        40,
        50  
    };
    cout<<"Medicine Type"<<endl;
    for(float i=0;i<Average.size();i++)
    {
        cout<<medicine[i]<<":"<<Average[i]<<endl;
    }
    return 0;
}