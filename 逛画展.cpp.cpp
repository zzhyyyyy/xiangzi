#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000005],b[2005],k,ans,l,r,ll,rr;
//b[i]��ʾ��ǰ���仭��i��ͼ����
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	l=1; r=1; k=1; b[a[1]]=1; ans=1000005;
    //k��¼��ǰ�������ж��ٻ��ҵ�ͼ��
	while(l<=r && r<=n)
	{
		if(k==m)//�ж��Ƿ����Ҫ��
		{
			if(ans>r-l+1)	
			{
				ans=r-l+1;//ans��¼��С���䳤��
				ll=l; rr=r;
    //ll��¼��С�������˵�,rr��¼��С������Ҷ˵�
			}
			b[a[l]]--;
			if(b[a[l]]==0) k--;
			l++;
		}
		else{
			r++;
			b[a[r]]++;
			if(b[a[r]]==1) k++;
		}
	}
	printf("%d %d",ll,rr);
	return 0;
}
