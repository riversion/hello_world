#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(0));
	int n=rand()%5+2;
	cout<<n<<" ";
	int k=rand()%(n*n);
	if(k==0)
	{
		k=1;
	}
	cout<<k<<endl;
 }   
