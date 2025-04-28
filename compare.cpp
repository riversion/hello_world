#include<bits/stdc++.h>
//#define int long long
using namespace std;
int main()
{
	int res=0;
	while(1)
	{
		res+=1;
		system("data.exe > data.in");
		system("std.exe < data.in > std.out");
		system("my.exe < data.in > my.out");
		if(system("fc std.out my.out")==1)
		{
			system("pause");
		}
		cout<<"case:"<<res<<endl;
	}
 } 
