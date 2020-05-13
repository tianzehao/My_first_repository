#include <iostream>
using namespace std;

int max(int x,int y)//函数定义求x和y的较大值
{
	int z;

	if(x>y) z=x;
	else z=y;
	return z;
}

int main()
{
	int a,b,c;

	cout<<"请输入两个整数：\n";
	cin>>a>>b;
	c=max(a,b);//函数调用
	cout<<"max="<<c<<'\n';
	return 0;
}

