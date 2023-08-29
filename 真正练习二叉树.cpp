#include<bits/stdc++.h>
using namespace std;
int cnt=1;
struct btnode
{
	char val;
	btnode*leftchild;
	btnode*rightchild;		
};
btnode *buildtree()
{
	char val;
	cin>>val;
	if(val=='#') return NULL;
	btnode*root=new btnode();//new创建root为btnode类 
	root->leftchild=buildtree();
	root->rightchild=buildtree();
	return root;
}
int counttreenode(btnode*root)
{
	if(root==NULL) return 0;
	if(root->leftchild!=NULL) 
	{
		cnt++;
		counttreenode(root->leftchild);
	}
	if(root->rightchild!=NULL) 
	{
		cnt++;
		counttreenode(root->rightchild);
	}
	return cnt;
}
int main()
{
	btnode*root=buildtree();
	cout<<counttreenode(root);
	return 0;
}














