#include<bits/stdc++.h>  //luogu p3743
using namespace std;
typedef long long ll;
const int N =1e5+10;
double a[N],b[N];
int n,p;
bool check(double mid)
{
	double cnt=0,res=p*mid;
	for(int i=0;i<n;i++)
	{
		if(b[i]>=a[i]*mid) continue;
		else cnt+=a[i]*mid-b[i];
	}
	return res>=cnt;
}
int main()
{
	cin>>n>>p;
	for(int i=0;i<n;i++)
	cin>>a[i]>>b[i];
	double res=0;
	for(int i=0;i<n;i++)
	res+=a[i];
	if(res<=p) {
		puts("-1");
		return 0;
	}
	double l=0,r=1e10;
	while(r-l>1e-6)
	{
		double mid=(l+r)/2;
		if(check(mid)) l=mid;
		else r=mid;
	}
	cout<<l<<endl;
	//printf("%.6lf",l);
	return 0;
} 
