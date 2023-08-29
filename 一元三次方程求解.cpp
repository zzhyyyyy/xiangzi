#include<bits/stdc++.h> //luogu  p1024
using namespace std;
int main()
{
	double a,b,c,d;
	int cnt=0;
	cin>>a>>b>>c>>d;
	double l=-101,r=101;
	for(double i=l;i<r;i+=0.001)
	{
		if(cnt==3) return 0;
		if(a*pow(i,3)+b*pow(i,2)+c*i+d>=-1e-4&&a*pow(i,3)+b*pow(i,2)+c*i+d<=1e-4)
		{
			printf("%.2lf ",i);
			cnt++;
			i+=0.999;
		}
	}
	return 0;
}
