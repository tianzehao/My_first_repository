#include <iostream>
using namespace std;

int max(int x,int y)//����������x��y�Ľϴ�ֵ
{
	int z;

	if(x>y) z=x;
	else z=y;
	return z;
}

int main()
{
	int a,b,c;

	cout<<"����������������\n";
	cin>>a>>b;
	c=max(a,b);//��������
	cout<<"max="<<c<<'\n';
	return 0;
}

