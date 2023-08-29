#include<bits/stdc++.h> //luogu p2678
using namespace std;
const int N =1e5;
int a[N];
int dist,n,m;
bool check(int mid)
{
	int cnt=0,now=0;
	for(int i=1;i<=n+1;i++)
	{
		if(a[i]-a[now]<mid) cnt++;
		else now=i;
	}
	if(cnt>m) return false;
	return true;
}
int main()
{
	cin>>dist>>n>>m;
	a[0]=0;
	int _=0;
	while(_<n)
	{
		_++;
		int x;
		cin>>x;
		a[_]=x;
	}
	a[n+1]=dist;
	int l=a[0],r=2e9;
	while(l<r)
	{
		int mid=l+r+1>>1;
		if(check(mid)) l=mid;
		else r=mid-1;
 	}
 	cout<<l;
 	return 0;
	
}
