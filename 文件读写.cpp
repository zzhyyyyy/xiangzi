
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,3,4,3,7,7,2,68};
	ofstream m("whyyds.txt");
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	m<<a[i]<<endl;
	m.close();
	ifstream finput("wenjianduxiecpp.txt");
	int res=0,tem;
	while(true)
	{
		if(finput>>tem) res+=tem;
		else break;
	}
	cout<<res;
	finput.close(); 
}
