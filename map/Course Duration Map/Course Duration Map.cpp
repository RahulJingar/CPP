#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int>course = {
		{"Bachelor Degree",48},
		{"Master Degree",24},
		{"Diploma",12},
		{"Certification",6},
		{"Online Course",3},
		{"PhD Program",60},
		{"Bootcamp",4},
		{"Associate Degree",24},
		{"Internship",2},
		{"Workshop",1}
	};
	cout<<"Course Type:-"<<endl;
	for(auto it:course)
	{
	    cout<<it.first<<":"<<it.second<<endl;
	}
	return 0;
}