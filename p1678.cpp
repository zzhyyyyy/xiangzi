#include<bits/stdc++.h>  //luogu p1678
using namespace std;
const int N = 1e5+10;
typedef long long ll;
ll res;
int a[N],b[N];
int n,m;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<m;i++)
	cin>>b[i];
	sort(a,a+n);
	for(int i=0;i<m;i++)
	{
		int l=0,r=n;
		while(r>l)
		{
			int mid=l+r>>1;
			if(a[mid]<b[i]) l=mid;
			else r=mid;
			if(r-l<=1)
			{
				res+=min(abs(a[r]-b[i]),abs(a[l]-b[i]));
				break;
			}
		}
	}
	cout<<res<<endl;
	return 0;
	
}

