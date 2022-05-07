#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6};
	int num,index,i,j;
	cout<<"enter the index";
	cin>>index;
	cout<<"enter the number";
	cin>>num;
	for(i =6;i>index;i--)
	{
		a[i]=a[i-1];
	}
	a[index]=num;
	for(j =0;j<=6;j++)
	{
		cout<<a[j];
	}
}
