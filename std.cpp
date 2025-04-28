#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
int num[500][500]={0};
int query(int a,int b,int c)
{
    int res=0;
    cout<<"? "<<a<<" "<<b<<" "<<c<<endl;
    if(num[a][b]<=c)
    {
    	return 1;
	}
	else
	{
		return 0;
	}
    //cin>>res;
    return res;
}
int check(int x)
{
    int sum=0;
    int cnt=n;
    for(int i=1;i<=n;i++)
    {
        while(cnt!=0)
        {
            if(query(i,cnt,x))
            {
                sum+=cnt;
                break;
            }
            cnt--;
        }
        if(cnt==0)
        {
            break;
        }
    }
  //  cout<<"sum::"<<sum<<" "<<k<<endl;
    if(sum>=k)
    return 1;
    else
    return 0;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(0));
    n=rand()%8;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		num[i][j]=rand()%(n*n);
    		if(i>=1&&j>=1)
    		{
    			while(num[i][j]<num[i-1][j]||num[i][j]<num[i][j-1])
    			{
    				num[i][j]=rand()%(n*n);
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<num[i][j]<<" ";
		}
		cout<<endl;
	}
	k=rand()%(n*n);
	if(k==0)
	{
		k=1;
	}
	cout<<n<<" "<<k<<endl;
    int l=1,r=n*n;
    int ans=n*n;
    k=n*n-k+1;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(check(mid))
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    if(check(r))
    {
        ans=min(ans,r);
    }
    cout<<"! "<<ans<<endl;
}

