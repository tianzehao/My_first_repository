#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	int max(int,int);//函数原型声明

	cout<<"请输入两个整数：\n";
	cin>>a>>b;
	c=max(a,b);//函数调用
	cout<<"max="<<c<<'\n';
	return 0;
}

int max(int x,int y)
{
	int z;

	if(x>y) z=x;
	else z=y;
	return z;
}